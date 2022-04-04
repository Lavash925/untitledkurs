/********************************************************************************
** Form generated from reading UI file 'idchoose.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDCHOOSE_H
#define UI_IDCHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_idchoose
{
public:
    QPushButton *idButton;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label_9;

    void setupUi(QWidget *idchoose)
    {
        if (idchoose->objectName().isEmpty())
            idchoose->setObjectName(QString::fromUtf8("idchoose"));
        idchoose->resize(331, 188);
        idButton = new QPushButton(idchoose);
        idButton->setObjectName(QString::fromUtf8("idButton"));
        idButton->setGeometry(QRect(90, 140, 151, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(16);
        idButton->setFont(font);
        label_8 = new QLabel(idchoose);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 70, 281, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(idchoose);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 110, 131, 22));
        radioButton = new QRadioButton(idchoose);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 50, 91, 19));
        radioButton->setFont(font1);
        radioButton_2 = new QRadioButton(idchoose);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(130, 50, 91, 19));
        radioButton_2->setFont(font1);
        radioButton_3 = new QRadioButton(idchoose);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(240, 50, 91, 19));
        radioButton_3->setFont(font1);
        label_9 = new QLabel(idchoose);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 0, 281, 41));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        retranslateUi(idchoose);

        QMetaObject::connectSlotsByName(idchoose);
    } // setupUi

    void retranslateUi(QWidget *idchoose)
    {
        idchoose->setWindowTitle(QCoreApplication::translate("idchoose", "Form", nullptr));
        idButton->setText(QCoreApplication::translate("idchoose", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
        label_8->setText(QCoreApplication::translate("idchoose", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\264 \320\267\320\260\320\272\320\260\320\267\321\207\320\270\320\272\320\260/\320\270\320\267\320\264\320\265\320\273\320\270\321\217/\320\274\320\260\321\201\321\202\320\265\321\200\320\260", nullptr));
        radioButton->setText(QCoreApplication::translate("idchoose", "\320\227\320\260\320\272\320\260\320\267\321\207\320\270\320\272", nullptr));
        radioButton_2->setText(QCoreApplication::translate("idchoose", "\320\230\320\267\320\264\320\265\320\273\320\270\320\265", nullptr));
        radioButton_3->setText(QCoreApplication::translate("idchoose", "\320\234\320\260\321\201\321\202\320\265\321\200", nullptr));
        label_9->setText(QCoreApplication::translate("idchoose", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \321\201\321\202\321\200\320\276\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class idchoose: public Ui_idchoose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDCHOOSE_H
