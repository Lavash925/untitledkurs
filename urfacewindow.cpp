#include "urfacewindow.h"
#include "ui_urfacewindow.h"

urfacewindow::urfacewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::urfacewindow)
{
    ui->setupUi(this);


}

urfacewindow::~urfacewindow()
{
    delete ui;
}
void urfacewindow::on_urorderPushButton_clicked()
{
    QString str_t = " INSERT INTO `spectre2`.`заказчик` (`Тип заказчика`, "
                    "`Название заказчика`, `ИНН заказчика`, `Руководитель`, `Улица`, `Дом`, `Район заказчика`, `Номер карты`) "
                    " VALUES (2, '%1', '%2', '%3', '%4', '%5', %6, '%7');";
    db_input = str_t .arg(m_company)
                     .arg(m_inn)
                     .arg(m_name)
                     .arg(m_street)
                     .arg(m_house)
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
    emit urorder_button_clicked();
    }
}

void urfacewindow::on_lineEdit_textEdited(const QString &company)
{
    urfacewindow::m_company = company;
}

void urfacewindow::on_lineEdit_2_textEdited(const QString &cardnumber)
{
    urfacewindow::m_cardnumber = cardnumber;
}

void urfacewindow::on_lineEdit_3_textEdited(const QString &inn)
{
    urfacewindow::m_inn = inn;
}

void urfacewindow::on_lineEdit_4_textEdited(const QString &street)
{
    urfacewindow::m_street = street;
}

void urfacewindow::on_lineEdit_5_textEdited(const QString &house)
{
    urfacewindow::m_house = house;
}

void urfacewindow::on_lineEdit_6_textEdited(const QString &name)
{
    urfacewindow::m_name = name;
}

void urfacewindow::on_lineEdit_7_textEdited(const QString &bonus2)
{
    urfacewindow::m_bonus2 = bonus2;
}

QString urfacewindow::getCompany()
{
    return urfacewindow::m_company;
}

QString urfacewindow::getINN()
{
    return urfacewindow::m_inn;
}

QString urfacewindow::getName()
{
    return urfacewindow::m_house;
}

QString urfacewindow::getStreet()
{
    return urfacewindow::m_street;
}

QString urfacewindow::getHouse()
{
    return urfacewindow::m_house;
}

QString urfacewindow::getCardNumber()
{
    return urfacewindow::m_cardnumber;
}

QString urfacewindow::getBonus()
{
    return urfacewindow::m_bonus2;
}

void urfacewindow::on_radioButton_clicked()
{
    rayon = 1;
}

void urfacewindow::on_radioButton_2_clicked()
{
    rayon = 2;
}

void urfacewindow::on_radioButton_3_clicked()
{
    rayon = 3;
}

void urfacewindow::on_radioButton_4_clicked()
{
    rayon = 4;
}

void urfacewindow::on_radioButton_5_clicked()
{
    rayon = 5;
}

