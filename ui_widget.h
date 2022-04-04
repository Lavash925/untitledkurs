/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableView *tableView;
    QPushButton *createRowButton;
    QPushButton *deleteRowButton;
    QTableView *tableView2;
    QPushButton *openCustomersTableButton;
    QPushButton *openProductTableButton;
    QPushButton *openMastersButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *openCountriesButton;
    QPushButton *openSectorsButton;
    QPushButton *openBanksButton;
    QPushButton *openCustomersTypesButton;
    QPushButton *openFirmsButton;
    QPushButton *openProductTypesButton;
    QPushButton *openPhonesButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setEnabled(true);
        Widget->resize(800, 600);
        Widget->setMinimumSize(QSize(800, 600));
        Widget->setMaximumSize(QSize(800, 600));
        tableView = new QTableView(Widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 40, 761, 271));
        createRowButton = new QPushButton(Widget);
        createRowButton->setObjectName(QString::fromUtf8("createRowButton"));
        createRowButton->setGeometry(QRect(420, 10, 181, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(16);
        createRowButton->setFont(font);
        deleteRowButton = new QPushButton(Widget);
        deleteRowButton->setObjectName(QString::fromUtf8("deleteRowButton"));
        deleteRowButton->setGeometry(QRect(600, 10, 181, 31));
        deleteRowButton->setFont(font);
        tableView2 = new QTableView(Widget);
        tableView2->setObjectName(QString::fromUtf8("tableView2"));
        tableView2->setGeometry(QRect(440, 330, 341, 251));
        openCustomersTableButton = new QPushButton(Widget);
        openCustomersTableButton->setObjectName(QString::fromUtf8("openCustomersTableButton"));
        openCustomersTableButton->setGeometry(QRect(20, 10, 101, 31));
        openCustomersTableButton->setFont(font);
        openProductTableButton = new QPushButton(Widget);
        openProductTableButton->setObjectName(QString::fromUtf8("openProductTableButton"));
        openProductTableButton->setGeometry(QRect(120, 10, 91, 31));
        openProductTableButton->setFont(font);
        openMastersButton = new QPushButton(Widget);
        openMastersButton->setObjectName(QString::fromUtf8("openMastersButton"));
        openMastersButton->setGeometry(QRect(210, 10, 91, 31));
        openMastersButton->setFont(font);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 330, 321, 255));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        openCountriesButton = new QPushButton(gridLayoutWidget);
        openCountriesButton->setObjectName(QString::fromUtf8("openCountriesButton"));
        openCountriesButton->setFont(font);

        gridLayout->addWidget(openCountriesButton, 2, 0, 1, 1);

        openSectorsButton = new QPushButton(gridLayoutWidget);
        openSectorsButton->setObjectName(QString::fromUtf8("openSectorsButton"));
        openSectorsButton->setFont(font);

        gridLayout->addWidget(openSectorsButton, 4, 0, 1, 1);

        openBanksButton = new QPushButton(gridLayoutWidget);
        openBanksButton->setObjectName(QString::fromUtf8("openBanksButton"));
        openBanksButton->setFont(font);

        gridLayout->addWidget(openBanksButton, 5, 0, 1, 1);

        openCustomersTypesButton = new QPushButton(gridLayoutWidget);
        openCustomersTypesButton->setObjectName(QString::fromUtf8("openCustomersTypesButton"));
        openCustomersTypesButton->setFont(font);

        gridLayout->addWidget(openCustomersTypesButton, 0, 0, 1, 1);

        openFirmsButton = new QPushButton(gridLayoutWidget);
        openFirmsButton->setObjectName(QString::fromUtf8("openFirmsButton"));
        openFirmsButton->setFont(font);

        gridLayout->addWidget(openFirmsButton, 3, 0, 1, 1);

        openProductTypesButton = new QPushButton(gridLayoutWidget);
        openProductTypesButton->setObjectName(QString::fromUtf8("openProductTypesButton"));
        openProductTypesButton->setFont(font);

        gridLayout->addWidget(openProductTypesButton, 1, 0, 1, 1);

        openPhonesButton = new QPushButton(gridLayoutWidget);
        openPhonesButton->setObjectName(QString::fromUtf8("openPhonesButton"));
        openPhonesButton->setFont(font);

        gridLayout->addWidget(openPhonesButton, 6, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        createRowButton->setText(QCoreApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
        deleteRowButton->setText(QCoreApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
        openCustomersTableButton->setText(QCoreApplication::translate("Widget", "\320\227\320\260\320\272\320\260\320\267\321\207\320\270\320\272\320\270", nullptr));
        openProductTableButton->setText(QCoreApplication::translate("Widget", "\320\230\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        openMastersButton->setText(QCoreApplication::translate("Widget", "\320\234\320\260\321\201\321\202\320\265\321\200\320\260", nullptr));
        openCountriesButton->setText(QCoreApplication::translate("Widget", "\320\241\321\202\321\200\320\260\320\275\321\213-\320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\320\270", nullptr));
        openSectorsButton->setText(QCoreApplication::translate("Widget", "\320\240\320\260\320\271\320\276\320\275\321\213", nullptr));
        openBanksButton->setText(QCoreApplication::translate("Widget", "\320\221\320\260\320\275\320\272\320\270", nullptr));
        openCustomersTypesButton->setText(QCoreApplication::translate("Widget", "\320\242\320\270\320\277 \320\267\320\260\320\272\320\260\320\267\321\207\320\270\320\272\320\260", nullptr));
        openFirmsButton->setText(QCoreApplication::translate("Widget", "\320\244\320\270\321\200\320\274\321\213-\320\270\320\267\320\263\320\276\321\202\320\276\320\262\320\270\321\202\320\265\320\273\320\270", nullptr));
        openProductTypesButton->setText(QCoreApplication::translate("Widget", "\320\242\320\270\320\277\321\213 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        openPhonesButton->setText(QCoreApplication::translate("Widget", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275\321\213 \320\270 \320\277\321\200\320\270\320\274\320\265\321\207\320\260\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
