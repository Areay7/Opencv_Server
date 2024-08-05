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
        qDebug() << "bsize 1 : " << bsize;
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

    qDebug() << "bsize 2 : " << bsize;

    // 显示图片
    QPixmap mmp;
    mmp.loadFromData(data, "jpg");
    mmp = mmp.scaled(ui->picLb->size());
    ui->picLb->setPixmap(mmp);

}
