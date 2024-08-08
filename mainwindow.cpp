#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 监听，启动服务器  当有新客户端连接会发送 newconnection 信号
    mserver.listen(QHostAddress::Any, 9999);
    connect(&mserver, &QTcpServer::newConnection, this, &MainWindow::accept_client);

    bsize = 0;

    // 给 sql 模型绑定表格
    model.setTable("employee");

    // 创建一个线程
    QThread *thread = new QThread();
    // 把 QFaceObject 对象移动到线程中执行
    fobj.moveToThread(thread);
    // 启动线程
    thread->start();

    connect(this, &MainWindow::query, &fobj, &QFaceObject::face_query);
    // 关联 QFaceObject 对象里面的 send_faceid 信号
    connect(&fobj, &QFaceObject::send_faceid, this, &MainWindow::recv_faceid);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::accept_client()
{
    // 获取通信套接字
    msocket = mserver.nextPendingConnection();

    // 当客户端有数据到达，会发送 readyRead 信号
    connect(msocket, &QTcpSocket::readyRead, this, &MainWindow::read_data);

}

void MainWindow::read_data()
{
    // 把套接字绑定到数据流
    QDataStream stream(msocket);
    stream.setVersion(QDataStream::Qt_5_14);

    if(bsize == 0)
    {
        if(msocket->bytesAvailable() < (qint64)sizeof(bsize)) return;

        // 采集数据长度
        stream >> bsize;
    }

        // 数据还没发送完成，返回继续等待
    if(msocket->bytesAvailable() < bsize)
    {
        // qDebug() << "bsize 1 : " << bsize;
        return;
    }

    QByteArray data;
    stream >> data;
    bsize = 0;
    // 没有读取到数据
    if(data.size() == 0)
    {
        return;
    }

    // qDebug() << "bsize 2 : " << bsize;

    // 显示图片
    QPixmap mmp;
    mmp.loadFromData(data, "jpg");
    mmp = mmp.scaled(ui->picLb->size());
    ui->picLb->setPixmap(mmp);

    // 识别人脸
    Mat faceImage;
    std::vector<uchar> decode;
    decode.resize(data.size());
    memcpy(decode.data(), data.data(), data.size());

    faceImage = imdecode(decode, IMREAD_COLOR);

    // int faceid = fobj.face_query(faceImage);
    emit query(faceImage);
}

void MainWindow::recv_faceid(int64_t faceid)
{
    qDebug() << "识别到的 faceid : " << faceid;

    // 从数据库中查询 faceid
    // 给模型设置过滤器

    if(faceid < 0)
    {
        QString sdmsg = "{\"EmployeeID\":\"\", \"name\":\"\", \"department\":\"\", \"time\":\"\"}";
        // 把打包好的数据发送给客户端
        msocket->write(sdmsg.toUtf8());
        return;
    }

    model.setFilter(QString("FaceID=%1").arg(faceid));
    // 查询
    model.select();
    // 判断是否查询到数据
    if(model.rowCount() == 1)
    {
        // 学号，姓名，部门，时间
        // {EmployeeID:%1, name:%2, department:物联网工程, time:%3}
        QSqlRecord record = model.record(0);
        QString sdmsg = QString("{\"EmployeeID\":\"%1\", \"name\":\"%2\", \"department\":\"物联网工程\", \"time\":\"%3\"}")
                            .arg(record.value("EmployeeID").toString()).arg(record.value("name").toString())
                            .arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));

        // 把数据写入数据库 - 考勤表
        QString insertSql = QString("insert into attendance(EmployeeID) value('%1')").arg(record.value("EmployeeID").toString());
        QSqlQuery query;
        if(!query.exec(insertSql))
        {
            QString sdmsg = "{\"EmployeeID\":\"\", \"name\":\"\", \"department\":\"\", \"time\":\"\"}";
            // 把打包好的数据发送给客户端
            msocket->write(sdmsg.toUtf8());
            qDebug() << "query error : " << query.lastError().text();
            return;
        }
        else
        {
            // 把打包好的数据发送给客户端
            msocket->write(sdmsg.toUtf8());
        }
    }
}
