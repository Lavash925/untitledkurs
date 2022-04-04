/********************************************************************************
** Form generated from reading UI file 'authwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHWINDOW_H
#define UI_AUTHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_authwindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelWelcome;
    QLabel *label_Password;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *loginPushButton;
    QLabel *label_3;

    void setupUi(QWidget *authwindow)
    {
        if (authwindow->objectName().isEmpty())
            authwindow->setObjectName(QString::fromUtf8("authwindow"));
        authwindow->resize(332, 223);
        gridLayoutWidget = new QWidget(authwindow);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 60, 311, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelWelcome = new QLabel(gridLayoutWidget);
        labelWelcome->setObjectName(QString::fromUtf8("labelWelcome"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        labelWelcome->setFont(font);

        gridLayout->addWidget(labelWelcome, 1, 0, 1, 1);

        label_Password = new QLabel(gridLayoutWidget);
        label_Password->setObjectName(QString::fromUtf8("label_Password"));
        label_Password->setFont(font);

        gridLayout->addWidget(label_Password, 2, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaxLength(16);
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        loginPushButton = new QPushButton(authwindow);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));
        loginPushButton->setGeometry(QRect(80, 150, 151, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(14);
        font1.setBold(true);
        loginPushButton->setFont(font1);
        loginPushButton->setAutoDefault(false);
        label_3 = new QLabel(authwindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 0, 111, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(24);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(authwindow);
        QObject::connect(lineEdit_2, &QLineEdit::returnPressed, loginPushButton, qOverload<>(&QPushButton::click));

        loginPushButton->setDefault(false);


        QMetaObject::connectSlotsByName(authwindow);
    } // setupUi

    void retranslateUi(QWidget *authwindow)
    {
        authwindow->setWindowTitle(QCoreApplication::translate("authwindow", "Form", nullptr));
        labelWelcome->setText(QCoreApplication::translate("authwindow", "ID", nullptr));
        label_Password->setText(QCoreApplication::translate("authwindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        loginPushButton->setText(QCoreApplication::translate("authwindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("authwindow", "\320\222\320\245\320\236\320\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authwindow: public Ui_authwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHWINDOW_H
