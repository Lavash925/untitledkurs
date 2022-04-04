/********************************************************************************
** Form generated from reading UI file 'choosewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEWINDOW_H
#define UI_CHOOSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choosewindow
{
public:
    QPushButton *fizButton;
    QPushButton *logButton;
    QLabel *label;
    QPushButton *urButton;

    void setupUi(QWidget *choosewindow)
    {
        if (choosewindow->objectName().isEmpty())
            choosewindow->setObjectName(QString::fromUtf8("choosewindow"));
        choosewindow->resize(400, 200);
        fizButton = new QPushButton(choosewindow);
        fizButton->setObjectName(QString::fromUtf8("fizButton"));
        fizButton->setGeometry(QRect(20, 70, 371, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(20);
        fizButton->setFont(font);
        logButton = new QPushButton(choosewindow);
        logButton->setObjectName(QString::fromUtf8("logButton"));
        logButton->setGeometry(QRect(120, 170, 161, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(10);
        logButton->setFont(font1);
        label = new QLabel(choosewindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 0, 221, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(36);
        label->setFont(font2);
        urButton = new QPushButton(choosewindow);
        urButton->setObjectName(QString::fromUtf8("urButton"));
        urButton->setGeometry(QRect(20, 120, 371, 41));
        urButton->setFont(font);

        retranslateUi(choosewindow);

        QMetaObject::connectSlotsByName(choosewindow);
    } // setupUi

    void retranslateUi(QWidget *choosewindow)
    {
        choosewindow->setWindowTitle(QCoreApplication::translate("choosewindow", "Form", nullptr));
        fizButton->setText(QCoreApplication::translate("choosewindow", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267 \320\272\320\260\320\272 \321\204\320\270\320\267. \320\273\320\270\321\206\320\276", nullptr));
        logButton->setText(QCoreApplication::translate("choosewindow", "\320\222\320\276\320\271\321\202\320\270 \320\262 \321\201\320\270\321\201\321\202\320\265\320\274\321\203", nullptr));
        label->setText(QCoreApplication::translate("choosewindow", "Spectre", nullptr));
        urButton->setText(QCoreApplication::translate("choosewindow", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267 \320\272\320\260\320\272 \321\216\321\200. \320\273\320\270\321\206\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choosewindow: public Ui_choosewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEWINDOW_H
