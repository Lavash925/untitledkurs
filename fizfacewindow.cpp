#include "fizfacewindow.h"
#include "ui_fizfacewindow.h"

fizfacewindow::fizfacewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fizfacewindow)
{
    ui->setupUi(this);
}

fizfacewindow::~fizfacewindow()
{
    delete ui;
}

void fizfacewindow::on_fizorderPushButton_clicked()
{
    QString str_t = " INSERT INTO `spectre2`.`заказчик` (`Тип заказчика`, "
                    "`ФИО заказчика`, `Улица`, `Дом`, `Квартира`, `Район заказчика`, `Номер карты`) "
                    " VALUES (1, '%1', '%2', '%3', '%4', %5, '%6');";
    db_input = str_t .arg(m_fio)
                     .arg(m_street)
                     .arg(m_house)
                     .arg(m_aparts)
                     .arg(rayon)
                     .arg(m_cardnumber);

    QSqlQuery query;
    if(!query.exec(db_input))
    {
        qDebug() << "Unable to insert data"  << query.lastError() << " : " << query.lastQuery() ;
    }
    else
    {
    this->close();
    emit fizorder_button_clicked();
    }
}

void fizfacewindow::on_lineEdit_textEdited(const QString &fio)
{
    fizfacewindow::m_fio = fio;
}

void fizfacewindow::on_lineEdit_2_textEdited(const QString &cardnumber)
{
    fizfacewindow::m_cardnumber = cardnumber;
}

void fizfacewindow::on_lineEdit_4_textEdited(const QString &house)
{
    fizfacewindow::m_house = house;
}

void fizfacewindow::on_lineEdit_5_textEdited(const QString &aparts)
{
    fizfacewindow::m_aparts = aparts;
}

void fizfacewindow::on_lineEdit_6_textEdited(const QString &street)
{
    fizfacewindow::m_street = street;
}

void fizfacewindow::on_lineEdit_8_textEdited(const QString &phone)
{
    fizfacewindow::m_phone = phone;
}

void fizfacewindow::on_lineEdit_7_textEdited(const QString &bonus1)
{
    fizfacewindow::m_bonus1 = bonus1;
}

QString fizfacewindow::getFIO()
{
    return fizfacewindow::m_fio;
}

QString fizfacewindow::getStreet()
{
    return fizfacewindow::m_street;
}

QString fizfacewindow::getHouse()
{
    return fizfacewindow::m_house;
}

QString fizfacewindow::getAparts()
{
    return fizfacewindow::m_aparts;
}

QString fizfacewindow::getCardNumber()
{
    return fizfacewindow::m_cardnumber;
}

QString fizfacewindow::getBonus()
{
    return fizfacewindow::m_bonus1;
}

QString fizfacewindow::getPhone()
{
    return fizfacewindow::m_phone;
}



void fizfacewindow::on_radioButton_clicked()
{
    rayon = 1;
}


void fizfacewindow::on_radioButton_2_clicked()
{
    rayon = 2;
}


void fizfacewindow::on_radioButton_3_clicked()
{
    rayon = 3;
}


void fizfacewindow::on_radioButton_4_clicked()
{
    rayon = 4;
}


void fizfacewindow::on_radioButton_5_clicked()
{
    rayon = 5;
}

