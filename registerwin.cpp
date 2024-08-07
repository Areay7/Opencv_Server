#include "registerwin.h"
#include "ui_registerwin.h"


RegisterWin::RegisterWin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RegisterWin)
{
    ui->setupUi(this);
}

RegisterWin::~RegisterWin()
{
    delete ui;
}

void RegisterWin::on_resetBtn_clicked()
{
    // 清空数据
    ui->nameEdit->clear();
    ui->birthdayEdit->setDate(QDate::currentDate());
    ui->addressEdit->clear();
    ui->phoneEdit->clear();
    ui->picFileEdit->clear();
}


void RegisterWin::on_addPicBtn_clicked()
{
    // 通过文件对话框，选中图片路径
    QString filePath =  QFileDialog::getOpenFileName(this);
    ui->picFileEdit->setText(filePath);

    // 显示图片
    QPixmap mmp(filePath);
    mmp = mmp.scaledToWidth(ui->headPicLb->width());
    ui->headPicLb->setPixmap(mmp);

}


void RegisterWin::on_registerBtn_clicked()
{
    // 1. 通过照片，结合 faceObject 模块得到 faceID
    QFaceObject faceObj;
    Mat image = imread(ui->picFileEdit->text().toUtf8().data());
    int faceID = faceObj.face_register(image);

    // 把头像保存到一个规定路径
    QString headFile = QString("./data/%1.jpg").arg(ui->nameEdit->text().toUtf8().toBase64());

    // 2. 把个人数据存到数据库 employee
    QSqlTableModel model;
    // 设置表名
    model.setTable("employee");

    QSqlRecord record = model.record();
    // 设置数据
    record.setValue("name", ui->nameEdit->text());
    record.setValue("sex", ui->mrb->isChecked() ? "男" : "女");
    record.setValue("birthday", ui->birthdayEdit->text());
    record.setValue("address", ui->addressEdit->text());
    record.setValue("phone", ui->phoneEdit->text());
    record.setValue("FaceID", faceID);
    // 头像路径
    record.setValue("headFile", headFile);

    // 把记录插入到数据库中
    bool ret = model.insertRecord(0,record);

    // 3. 提示注册成功
    if(ret)
    {
        QMessageBox::information(this, "注册提示", "注册成功");
        // 提交
        model.submit();
    }
    else
    {
        QMessageBox::information(this, "注册提示", "注册失败");
    }

}

