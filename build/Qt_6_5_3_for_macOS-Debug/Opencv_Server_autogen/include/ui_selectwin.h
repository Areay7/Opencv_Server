/********************************************************************************
** Form generated from reading UI file 'selectwin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIN_H
#define UI_SELECTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectWin
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *empRb;
    QRadioButton *attRb;
    QPushButton *selectButton;
    QTableView *tableView;

    void setupUi(QWidget *SelectWin)
    {
        if (SelectWin->objectName().isEmpty())
            SelectWin->setObjectName("SelectWin");
        SelectWin->resize(679, 468);
        verticalLayout = new QVBoxLayout(SelectWin);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        empRb = new QRadioButton(SelectWin);
        empRb->setObjectName("empRb");

        horizontalLayout->addWidget(empRb);

        attRb = new QRadioButton(SelectWin);
        attRb->setObjectName("attRb");

        horizontalLayout->addWidget(attRb);

        selectButton = new QPushButton(SelectWin);
        selectButton->setObjectName("selectButton");

        horizontalLayout->addWidget(selectButton);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(SelectWin);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        retranslateUi(SelectWin);

        QMetaObject::connectSlotsByName(SelectWin);
    } // setupUi

    void retranslateUi(QWidget *SelectWin)
    {
        SelectWin->setWindowTitle(QCoreApplication::translate("SelectWin", "Form", nullptr));
        empRb->setText(QCoreApplication::translate("SelectWin", "\345\255\246\347\224\237", nullptr));
        attRb->setText(QCoreApplication::translate("SelectWin", "\350\200\203\345\213\244", nullptr));
        selectButton->setText(QCoreApplication::translate("SelectWin", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectWin: public Ui_SelectWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIN_H
