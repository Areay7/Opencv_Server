/********************************************************************************
** Form generated from reading UI file 'registerwin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIN_H
#define UI_REGISTERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWin
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QRadioButton *mrb;
    QRadioButton *wrb;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QDateEdit *birthdayEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *addressEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *phoneEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *registerBtn;
    QPushButton *resetBtn;
    QVBoxLayout *verticalLayout_2;
    QLabel *headPicLb;
    QLineEdit *picFileEdit;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *addPicBtn;
    QPushButton *videoSwitchBtn;
    QPushButton *cameraBtn;

    void setupUi(QWidget *RegisterWin)
    {
        if (RegisterWin->objectName().isEmpty())
            RegisterWin->setObjectName("RegisterWin");
        RegisterWin->resize(846, 474);
        QFont font;
        font.setPointSize(15);
        RegisterWin->setFont(font);
        widget = new QWidget(RegisterWin);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 831, 451));
        horizontalLayout_9 = new QHBoxLayout(widget);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        nameEdit = new QLineEdit(widget);
        nameEdit->setObjectName("nameEdit");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy);
        nameEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(nameEdit);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 50));

        horizontalLayout_2->addWidget(label_2);

        mrb = new QRadioButton(widget);
        mrb->setObjectName("mrb");

        horizontalLayout_2->addWidget(mrb);

        wrb = new QRadioButton(widget);
        wrb->setObjectName("wrb");

        horizontalLayout_2->addWidget(wrb);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_3);

        birthdayEdit = new QDateEdit(widget);
        birthdayEdit->setObjectName("birthdayEdit");
        sizePolicy.setHeightForWidth(birthdayEdit->sizePolicy().hasHeightForWidth());
        birthdayEdit->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(21);
        birthdayEdit->setFont(font1);
        birthdayEdit->setAlignment(Qt::AlignCenter);
        birthdayEdit->setDateTime(QDateTime(QDate(2024, 7, 25), QTime(0, 0, 0)));

        horizontalLayout_7->addWidget(birthdayEdit);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        addressEdit = new QLineEdit(widget);
        addressEdit->setObjectName("addressEdit");
        sizePolicy.setHeightForWidth(addressEdit->sizePolicy().hasHeightForWidth());
        addressEdit->setSizePolicy(sizePolicy);
        addressEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(addressEdit);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_6);

        phoneEdit = new QLineEdit(widget);
        phoneEdit->setObjectName("phoneEdit");
        sizePolicy.setHeightForWidth(phoneEdit->sizePolicy().hasHeightForWidth());
        phoneEdit->setSizePolicy(sizePolicy);
        phoneEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(phoneEdit);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        registerBtn = new QPushButton(widget);
        registerBtn->setObjectName("registerBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(registerBtn->sizePolicy().hasHeightForWidth());
        registerBtn->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(17);
        registerBtn->setFont(font2);

        horizontalLayout->addWidget(registerBtn);

        resetBtn = new QPushButton(widget);
        resetBtn->setObjectName("resetBtn");
        sizePolicy1.setHeightForWidth(resetBtn->sizePolicy().hasHeightForWidth());
        resetBtn->setSizePolicy(sizePolicy1);
        resetBtn->setFont(font2);

        horizontalLayout->addWidget(resetBtn);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_9->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        headPicLb = new QLabel(widget);
        headPicLb->setObjectName("headPicLb");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(headPicLb->sizePolicy().hasHeightForWidth());
        headPicLb->setSizePolicy(sizePolicy2);
        headPicLb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 162, 244);"));

        verticalLayout_2->addWidget(headPicLb);

        picFileEdit = new QLineEdit(widget);
        picFileEdit->setObjectName("picFileEdit");

        verticalLayout_2->addWidget(picFileEdit);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        addPicBtn = new QPushButton(widget);
        addPicBtn->setObjectName("addPicBtn");
        sizePolicy1.setHeightForWidth(addPicBtn->sizePolicy().hasHeightForWidth());
        addPicBtn->setSizePolicy(sizePolicy1);
        addPicBtn->setFont(font2);

        horizontalLayout_8->addWidget(addPicBtn);

        videoSwitchBtn = new QPushButton(widget);
        videoSwitchBtn->setObjectName("videoSwitchBtn");
        sizePolicy1.setHeightForWidth(videoSwitchBtn->sizePolicy().hasHeightForWidth());
        videoSwitchBtn->setSizePolicy(sizePolicy1);
        videoSwitchBtn->setFont(font2);

        horizontalLayout_8->addWidget(videoSwitchBtn);

        cameraBtn = new QPushButton(widget);
        cameraBtn->setObjectName("cameraBtn");
        sizePolicy1.setHeightForWidth(cameraBtn->sizePolicy().hasHeightForWidth());
        cameraBtn->setSizePolicy(sizePolicy1);
        cameraBtn->setFont(font2);

        horizontalLayout_8->addWidget(cameraBtn);


        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalLayout_2->setStretch(0, 6);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 1);

        horizontalLayout_9->addLayout(verticalLayout_2);


        retranslateUi(RegisterWin);

        QMetaObject::connectSlotsByName(RegisterWin);
    } // setupUi

    void retranslateUi(QWidget *RegisterWin)
    {
        RegisterWin->setWindowTitle(QCoreApplication::translate("RegisterWin", "Form", nullptr));
        label->setText(QCoreApplication::translate("RegisterWin", "\345\247\223  \345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterWin", "           \346\200\247  \345\210\253\357\274\232", nullptr));
        mrb->setText(QCoreApplication::translate("RegisterWin", "\347\224\267", nullptr));
        wrb->setText(QCoreApplication::translate("RegisterWin", "\345\245\263", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterWin", "\347\224\237  \346\227\245\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterWin", "\345\234\260 \345\235\200\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterWin", "\347\224\265 \350\257\235\357\274\232", nullptr));
        registerBtn->setText(QCoreApplication::translate("RegisterWin", "\346\263\250 \345\206\214", nullptr));
        resetBtn->setText(QCoreApplication::translate("RegisterWin", "\351\207\215 \347\275\256", nullptr));
        headPicLb->setText(QString());
        addPicBtn->setText(QCoreApplication::translate("RegisterWin", "\346\267\273\345\212\240\345\244\264\345\203\217", nullptr));
        videoSwitchBtn->setText(QCoreApplication::translate("RegisterWin", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        cameraBtn->setText(QCoreApplication::translate("RegisterWin", "\346\213\215\347\205\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWin: public Ui_RegisterWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIN_H
