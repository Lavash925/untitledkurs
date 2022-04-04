/********************************************************************************
** Form generated from reading UI file 'fizfacewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIZFACEWINDOW_H
#define UI_FIZFACEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fizfacewindow
{
public:
    QLabel *label_7;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLabel *label_2;
    QGridLayout *gridLayout_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_7;
    QLabel *label_9;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QPushButton *fizorderPushButton;

    void setupUi(QWidget *fizfacewindow)
    {
        if (fizfacewindow->objectName().isEmpty())
            fizfacewindow->setObjectName(QString::fromUtf8("fizfacewindow"));
        fizfacewindow->resize(526, 519);
        label_7 = new QLabel(fizfacewindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(130, 30, 341, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(24);
        label_7->setFont(font);
        gridLayoutWidget_2 = new QWidget(fizfacewindow);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(50, 100, 421, 241));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_4 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout_2->addWidget(lineEdit_4, 4, 1, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout_2->addWidget(lineEdit_6, 3, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout_2->addWidget(lineEdit_5, 5, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 5, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 6, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        radioButton = new QRadioButton(gridLayoutWidget_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout_5->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(gridLayoutWidget_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_5->addWidget(radioButton_2, 0, 1, 1, 1);

        radioButton_3 = new QRadioButton(gridLayoutWidget_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout_5->addWidget(radioButton_3, 1, 0, 1, 1);

        radioButton_4 = new QRadioButton(gridLayoutWidget_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout_5->addWidget(radioButton_4, 1, 1, 1, 1);

        radioButton_5 = new QRadioButton(gridLayoutWidget_2);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        gridLayout_5->addWidget(radioButton_5, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_5, 2, 1, 1, 1);

        gridLayoutWidget = new QWidget(fizfacewindow);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 340, 421, 71));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_7 = new QLineEdit(gridLayoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 2, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        lineEdit_8 = new QLineEdit(gridLayoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        gridLayout->addWidget(lineEdit_8, 1, 1, 1, 1);

        fizorderPushButton = new QPushButton(fizfacewindow);
        fizorderPushButton->setObjectName(QString::fromUtf8("fizorderPushButton"));
        fizorderPushButton->setGeometry(QRect(180, 430, 151, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(16);
        fizorderPushButton->setFont(font1);

        retranslateUi(fizfacewindow);
        QObject::connect(lineEdit_7, &QLineEdit::returnPressed, fizorderPushButton, qOverload<>(&QPushButton::click));

        QMetaObject::connectSlotsByName(fizfacewindow);
    } // setupUi

    void retranslateUi(QWidget *fizfacewindow)
    {
        fizfacewindow->setWindowTitle(QCoreApplication::translate("fizfacewindow", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("fizfacewindow", "\320\236\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        label->setText(QCoreApplication::translate("fizfacewindow", "\320\244\320\260\320\274\320\273\320\270\320\270\321\217 \320\230.\320\236.", nullptr));
        label_6->setText(QCoreApplication::translate("fizfacewindow", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\260\321\200\321\202\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("fizfacewindow", "\320\224\320\276\320\274", nullptr));
        label_4->setText(QCoreApplication::translate("fizfacewindow", "\320\232\320\262\320\260\321\200\321\202\320\270\321\200\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("fizfacewindow", "\320\240\320\260\320\271\320\276\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("fizfacewindow", "\320\243\320\273\320\270\321\206\320\260", nullptr));
        radioButton->setText(QCoreApplication::translate("fizfacewindow", "\320\246\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\321\213\320\271", nullptr));
        radioButton_2->setText(QCoreApplication::translate("fizfacewindow", "\320\230\320\275\320\264\321\203\321\201\321\202\321\200\320\270\320\260\320\273\321\214\320\275\321\213\320\271", nullptr));
        radioButton_3->setText(QCoreApplication::translate("fizfacewindow", "\320\226\320\265\320\273\320\265\320\267\320\275\320\276\320\264\320\276\321\200\320\276\320\266\320\275\321\213\320\271", nullptr));
        radioButton_4->setText(QCoreApplication::translate("fizfacewindow", "\320\232\320\270\321\200\320\276\320\262\321\201\320\272\320\270\320\271", nullptr));
        radioButton_5->setText(QCoreApplication::translate("fizfacewindow", "\320\232\321\200\320\260\321\201\320\275\320\276\321\204\320\273\320\276\321\202\321\201\320\272\320\270\320\271", nullptr));
        label_9->setText(QCoreApplication::translate("fizfacewindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("fizfacewindow", "\320\232\321\200\320\260\321\202\320\272\320\276\320\265 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\277\321\200\320\276\320\261\320\273\320\265\320\274\321\213", nullptr));
        fizorderPushButton->setText(QCoreApplication::translate("fizfacewindow", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fizfacewindow: public Ui_fizfacewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIZFACEWINDOW_H
