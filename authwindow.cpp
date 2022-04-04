#include "authwindow.h"
#include "ui_authwindow.h"

authwindow::authwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::authwindow)
{
    ui->setupUi(this);
}

authwindow::~authwindow()
{
    delete ui;
}

void authwindow::on_loginPushButton_clicked()
{
    emit login_button_clicked();
}

void authwindow::on_lineEdit_textEdited(const QString &arg1)
{
    authwindow::m_username = arg1;
}

void authwindow::on_lineEdit_2_textEdited(const QString &arg1)
{
    authwindow::m_userpass = arg1;
}

QString authwindow::getLogin()
{
    return authwindow::m_username;
}

QString authwindow::getPass()
{
    return authwindow::m_userpass;
}
