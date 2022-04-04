#include "idchoose.h"
#include "ui_idchoose.h"

idchoose::idchoose(QWidget *parent) :
QWidget(parent),
ui(new Ui::idchoose)
{
ui->setupUi(this);
}

idchoose::~idchoose()
{
delete ui;
}

void idchoose::on_idButton_clicked()
{
    x = ui->lineEdit->text().toInt();
    if(fl==1)
    {
        QString str_t = " DELETE FROM `spectre2`.`заказчик` WHERE (`Код заказчика` = '%1');";
         db_input = str_t .arg(x);
    }
    else if(fl==2)
    {
        QString str_t = " DELETE FROM `spectre2`.`изделие` WHERE (`TypeID` = '%1');";
        db_input = str_t .arg(x);
    }
    else if (fl==3)
    {
        QString str_t = "DELETE FROM `spectre2`.`мастер` WHERE (`Код мастера` = '%1');";
        db_input = str_t .arg(x);
    }
    else
    {
    }
QSqlQuery query;
if(!query.exec(db_input))
{
    qDebug() << "Unable to insert data"  << query.lastError() << " : " << query.lastQuery() ;
}
    this->close();
    emit idButton_clicked();
}


void idchoose::on_lineEdit_textEdited(const QString &id1)
{
    idchoose::m_id = id1;
}


void idchoose::on_radioButton_clicked()
{
    fl=1;
}


void idchoose::on_radioButton_2_clicked()
{
    fl=2;
}


void idchoose::on_radioButton_3_clicked()
{
    fl=3;
}

