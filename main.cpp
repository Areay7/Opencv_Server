#include "mainwindow.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <opencv2/opencv.hpp>

#include "registerwin.h"
#include "selectwin.h"

using namespace cv;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qRegisterMetaType<Mat>("Mat&");
    qRegisterMetaType<Mat>("Mat");
    qRegisterMetaType<int64_t>("int64_t");

    // RegisterWin ww;
    // ww.show();

    // 数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    // 设置数据库名称
    db.setDatabaseName("opencv");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("qq2507549477");

    if(!db.open())
    {
        qDebug() << db.lastError().text();
        return -1;
    }

    // 创建员工信息表格

    //-------------------------------SLite写法----------------------------------
    // QString createSql = "create table if not exists employee(EmployeeID integer primary key autoincrement, name varchar(256),"
    //                     "sex varchar(32), birthday text, address text, phone text, FaceID integer unique, headFile text)";


    QString createSql = "create table if not exists employee(EmployeeID integer primary key auto_increment, name varchar(256),"
    "sex varchar(32), birthday text, address text, phone text, FaceID integer unique, headFile text)";

    QSqlQuery query;
    if(!query.exec(createSql))
    {
        qDebug() << query.lastError().text();
        return -1;
    }

    // 创建考勤表

    // createSql = "create table if not exists attendance(AttendanceID integer primary key autoincrement, EmployeeID integer,"
    //                     "AttendanceTime TimeStamp NOT NULL DEFAULT(datetime('now', 'localtime')))";

    createSql = "create table if not exists attendance(AttendanceID integer primary key auto_increment, EmployeeID integer,"
    "AttendanceTime TimeStamp NOT NULL DEFAULT CURRENT_TIMESTAMP)";
    if(!query.exec(createSql))
    {
        qDebug() << query.lastError().text();
        return -1;
    }

    // SelectWin s;
    // s.show();

    MainWindow w;
    w.show();


    return a.exec();
}
