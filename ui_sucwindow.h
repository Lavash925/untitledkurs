/********************************************************************************
** Form generated from reading UI file 'sucwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUCWINDOW_H
#define UI_SUCWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sucwindow
{
public:
    QPushButton *closeButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *sucwindow)
    {
        if (sucwindow->objectName().isEmpty())
            sucwindow->setObjectName(QString::fromUtf8("sucwindow"));
        sucwindow->resize(400, 157);
        closeButton = new QPushButton(sucwindow);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(100, 90, 191, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        closeButton->setFont(font);
        label = new QLabel(sucwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 381, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(24);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(sucwindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 381, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(12);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(sucwindow);

        closeButton->setDefault(true);


        QMetaObject::connectSlotsByName(sucwindow);
    } // setupUi

    void retranslateUi(QWidget *sucwindow)
    {
        sucwindow->setWindowTitle(QCoreApplication::translate("sucwindow", "Form", nullptr));
        closeButton->setText(QCoreApplication::translate("sucwindow", "\320\222\321\213\320\264\320\276\321\205\320\275\321\203\321\202\321\214 \320\270 \320\267\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("sucwindow", "\320\227\320\260\320\272\320\260\320\267 \321\203\321\201\320\277\320\265\321\210\320\275\320\276 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("sucwindow", "\320\226\320\264\320\270\321\202\320\265 \320\267\320\262\320\276\320\275\320\272\320\260 \320\262 \320\261\320\273\320\270\320\266\320\260\320\271\321\210\320\265\320\265 \320\262\321\200\320\265\320\274\321\217 :D", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sucwindow: public Ui_sucwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCWINDOW_H
