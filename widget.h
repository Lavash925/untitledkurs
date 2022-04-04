#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>
#include "authwindow.h"
#include "idchoose.h"
#include "choosewindow.h"
#include "fizfacewindow.h"
#include "urfacewindow.h"
#include "sucwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE
class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void start(); // прототип пользовательской функции отображения
    bool connectDB(); // прототип метода подключения к БД
    int tableId;
    int fl=0;
    int m_id;



private:
    Ui::Widget *ui_Main;

    authwindow ui_Auth; // экземпляры окна авторизации
    fizfacewindow ui_Fiz; // экземпляры окна физ. лица
    urfacewindow ui_Ur; // экземпляры окна юр. лица
    choosewindow ui_Choose; // экземпляры окна выборв пользователя
    sucwindow ui_Suc; // экземпляры окна выбора пользователя
    idchoose ui_ID;


    QString m_username; // строки для обработки
    QString m_userpass; // пользовательского ввода

    QString db_input; // строка для отправки запроса к БД

    QSqlDatabase db; // экземпляр подключения к БД

    int user_counter; // счетчик пользователей
    bool m_loginSuccesfull; // флаг успешной авторизации

signals:
    void deleteRowButton_clicked();

private slots:
    void authorizeUser(); // пользовательские слоты
    void displayFiz(); // прототип пользовательской функции отображения
    void displayUr(); // прототип пользовательской функции отображения
    void displayLog(); // прототип пользовательской функции отображения
    void displaySuc(); // прототип пользовательской функции отображения
    void displayID();
    void Upd();
    void on_openCustomersTableButton_clicked();
    void on_openProductTableButton_clicked();
    void on_openMastersButton_clicked();
    void on_openCustomersTypesButton_clicked();
    void on_openProductTypesButton_clicked();
    void on_openSectorsButton_clicked();
    void on_openBanksButton_clicked();
    void on_openCountriesButton_clicked();
    void on_openPhonesButton_clicked();

    void on_openBonusesButton_clicked();

    void on_openFirmsButton_clicked();

    void on_createRowButton_clicked();

    void on_deleteRowButton_clicked();

private:
    /* Также присутствуют два метода, которые формируют модель
     * и внешний вид TableView
     * */
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
    QSqlTableModel* model;
    QSqlTableModel* model2;
    QPoint _p;

protected:
    void mousePressEvent(QMouseEvent* event) override {
        if (event->button() == Qt::LeftButton ) {
            _p = event->pos();
        }
    }
};
#endif // WIDGET_H
