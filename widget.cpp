#include "widget.h"
#include "ui_widget.h"
#include "authwindow.h"
#include "fizfacewindow.h"
#include "urfacewindow.h"
#include "choosewindow.h"
#include "sucwindow.h"
#include "idchoose.h"
#include <QtDebug>
#include <QtSql/QSqlError>
#include <QtSql/QSqlRecord>

Widget::Widget(QWidget *parent) :
QWidget(parent),
    ui_Main(new Ui::Widget)
{
    user_counter = 0;
    m_loginSuccesfull = false;
    connect(&ui_Choose,SIGNAL(logButton_clicked()),
            this, SLOT(displayLog()));
    connect(&ui_Choose,SIGNAL(fizButton_clicked()),
            this, SLOT(displayFiz()));
    connect(&ui_Choose,SIGNAL(urButton_clicked()),
            this, SLOT(displayUr()));
    connect(&ui_Fiz,SIGNAL(fizorder_button_clicked()),
            this, SLOT(displaySuc()));
    connect(&ui_Fiz,SIGNAL(destroyed()),
            this, SLOT(show()));
    connect(&ui_Ur, SIGNAL(urorder_button_clicked()),
            this, SLOT(displaySuc()));
    connect(&ui_Ur,SIGNAL(destroyed()),
            this, SLOT(show()));
    connect(&ui_Auth, SIGNAL(login_button_clicked()),
            this, SLOT(authorizeUser()));
    connect(&ui_Auth,SIGNAL(destroyed()),
            this, SLOT(show()));
    connect(&ui_Suc,SIGNAL(closeButton_clicked()),
            this, SLOT(close()));
    connect(this, SIGNAL(deleteRowButton_clicked()),
            this, SLOT(displayID()));
    connect(&ui_ID, SIGNAL(idButton_clicked()),
            this, SLOT(Upd()));

    if(!connectDB())
    {
        qDebug() << "Failed to connect DB";
    }

    ui_Main->setupUi(this);
    ui_Main->tableView->setContextMenuPolicy(Qt::CustomContextMenu);
}


void Widget::authorizeUser()
{
    m_username = ui_Auth.getLogin();
    m_userpass = ui_Auth.getPass();

    QString str_t = " SELECT * "
                    " FROM userlist "
                    " WHERE ID = '%1'";
    // int db_number = 0;

    QString username = "";
    QString userpass = "";

    int xPos = 0;
    int yPos = 0;

    int width = 0;
    int length = 0;

    db_input = str_t.arg(m_username);

    QSqlQuery query;
    QSqlRecord rec;

    if(!query.exec(db_input))
    {
        qDebug() << "Unable to execute query - exiting" << query.lastError() << " : " << query.lastQuery();
    }
    rec = query.record();
    query.next();
    user_counter = query.value(rec.indexOf("number")).toInt();
    username = query.value(rec.indexOf("ID")).toString();
    userpass = query.value(rec.indexOf("pass")).toString();
    if(m_username != username || m_userpass != userpass)
    {
        qDebug() << "Password missmatch" << username << " " << userpass;
        m_loginSuccesfull = false;
    }
    else
    {
        m_loginSuccesfull = true;
        xPos = query.value(rec.indexOf("xpos")).toInt();
        yPos = query.value(rec.indexOf("ypos")).toInt();
        width = query.value(rec.indexOf("width")).toInt();
        length = query.value(rec.indexOf("length")).toInt();
        ui_Auth.close();
        this->setGeometry(xPos,yPos,width, length);
        this->show();

        model = new QSqlTableModel(this, db);
        model2 = new QSqlTableModel(this, db);
    }
    //QModelIndex index = ui_Main->tableView->indexAt(_p);
    //tableId = ui_Main->tableView->model()->data(ui_Main->tableView->model()->index(index.row, 0)).toInt;
}

void Widget::displayLog()
{
    ui_Auth.show();
}
void Widget::displayFiz()
{
    ui_Fiz.show();
}

void Widget::displayUr()
{
    ui_Ur.show();
}

void Widget::displaySuc()
{
    ui_Suc.show();
}

void Widget::displayID()
{
    ui_ID.show();
}
void Widget::start()
{
    ui_Choose.show();
}



Widget::~Widget()
{
    if(m_loginSuccesfull)
    {
        QString str_t = "UPDATE userlist "
                        "SET xpos = %2, ypos = %3, width = %4, length = %5 "
                        "WHERE name = '%1';";
        db_input = str_t .arg(m_username)
                         .arg(this->x())
                         .arg(this->y())
                         .arg(this->width())
                         .arg(this->height());
        QSqlQuery query;
        if(!query.exec(db_input))
        {
            qDebug() << "Unable to insert data"  << query.lastError() << " : " << query.lastQuery() ;
        }
    }
    db.removeDatabase("authorisation");
    qDebug() << "MainWindow Destroyed";
    delete ui_Main;
    exit(0);
}

bool Widget::connectDB()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("spectre2");
    db.setUserName("root");
    db.setPassword("1234");
     if (!db.open()){
        qDebug() << "Cannot open database: " << db.lastError();
        return false;
    }
    return true;
}


void Widget::on_openCustomersTableButton_clicked()
{
    fl=1;
    model->setTable("заказчик");
    model->select();
    ui_Main->tableView->setModel(model);
}


void Widget::on_openProductTableButton_clicked()
{
    fl=2;
    model->setTable("изделие");
    model->select();
    ui_Main->tableView->setModel(model);
}


void Widget::on_openMastersButton_clicked()
{
    fl=3;
    model->setTable("мастер");
    model->select();
    ui_Main->tableView->setModel(model);
}


void Widget::on_openCustomersTypesButton_clicked()
{
    model2->setTable("зактип");
    model2->select();
    ui_Main->tableView2->setModel(model2);
}


void Widget::on_openProductTypesButton_clicked()
{
    model2->setTable("издтип");
    model2->select();
    ui_Main->tableView2->setModel(model2);
}


void Widget::on_openSectorsButton_clicked()
{
    model2->setTable("район");
    model2->select();
    ui_Main->tableView2->setModel(model2);
}


void Widget::on_openBanksButton_clicked()
{
    model2->setTable("банк");
    model2->select();
    ui_Main->tableView2->setModel(model2);
}


void Widget::on_openCountriesButton_clicked()
{
    model2->setTable("страна");
    model2->select();
    ui_Main->tableView2->setModel(model2);
}


void Widget::on_openPhonesButton_clicked()
{
    model2->setTable("телефон");
    model2->select();
    ui_Main->tableView2->setModel(model2);
}


void Widget::on_openBonusesButton_clicked()
{

}


void Widget::on_openFirmsButton_clicked()
{
    model2->setTable("фирма");
    model2->select();
    ui_Main->tableView2->setModel(model2);
}


void Widget::on_createRowButton_clicked()
{

        if(fl==1)
        {
            QString str_t = " INSERT INTO `spectre2`.`заказчик` (`Тип заказчика`,`Район заказчика`) "
                            " VALUES (1, 1);";
             db_input = str_t;
        }
        else if(fl==2)
        {
            QString str_t = " INSERT INTO `spectre2`.`изделие` (`Тип изделия`,`Страна-производитель`,`Фирма-изготовитель`,`Код заказчика`,`Код мастера`)"
                            " VALUES (1, 1, 1, 1, 1);";
            db_input = str_t;
        }
        else if (fl==3)
        {
            QString str_t = " INSERT INTO `spectre2`.`мастер` (`ФИО мастера`) "
                            " VALUES (111);";
            db_input = str_t;
        }
        else
        {
        }
    QSqlQuery query;
    if(!query.exec(db_input))
    {
        qDebug() << "Unable to insert data"  << query.lastError() << " : " << query.lastQuery() ;
    }
    model->select();
    ui_Main->tableView->setModel(model);
}


void Widget::on_deleteRowButton_clicked()
{
    emit deleteRowButton_clicked();

}

void Widget::Upd()
{
    model->select();
    ui_Main->tableView->setModel(model);
}
