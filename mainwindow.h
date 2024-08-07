#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDebug>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QDateTime>

#include "qfaceobject.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:
    void accept_client();
    void read_data();

private:
    Ui::MainWindow *ui;
    QTcpServer mserver;
    QTcpSocket *msocket;
    quint64 bsize;

    QFaceObject fobj;

    QSqlTableModel model;

};
#endif // MAINWINDOW_H
