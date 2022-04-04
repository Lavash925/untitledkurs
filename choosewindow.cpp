#include "choosewindow.h"
#include "authwindow.h"
#include "fizfacewindow.h"
#include "urfacewindow.h"
#include "ui_choosewindow.h"


choosewindow::choosewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::choosewindow)
{
    ui->setupUi(this);


}

choosewindow::~choosewindow()
{
    delete ui;
}

void choosewindow::on_fizButton_clicked()
{
    this->close();
    emit fizButton_clicked();
}

void choosewindow::on_urButton_clicked()
{
    this->close();
    emit urButton_clicked();
}

void choosewindow::on_logButton_clicked()
{
    this->close();
    emit logButton_clicked();
}


