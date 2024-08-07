#ifndef REGISTERWIN_H
#define REGISTERWIN_H

#include <QWidget>
#include <QFileDialog>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QMessageBox>

#include "QFaceObject.h"


namespace Ui {
class RegisterWin;
}

class RegisterWin : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterWin(QWidget *parent = nullptr);
    ~RegisterWin();

private slots:
    void on_resetBtn_clicked();

    void on_addPicBtn_clicked();

    void on_registerBtn_clicked();

private:
    Ui::RegisterWin *ui;
};

#endif // REGISTERWIN_H
