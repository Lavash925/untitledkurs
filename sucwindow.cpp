#include "sucwindow.h"
#include "ui_sucwindow.h"

sucwindow::sucwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sucwindow)
{
    ui->setupUi(this);
}

sucwindow::~sucwindow()
{
    delete ui;
}
void sucwindow::on_closeButton_clicked()
{
    this->close();
}
