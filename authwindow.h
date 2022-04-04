#ifndef AUTHWINDOW_H
#define AUTHWINDOW_H

#include <QWidget>
#include "choosewindow.h"

namespace Ui {
class authwindow;
}

class authwindow : public QWidget
{
    Q_OBJECT

public:
    explicit authwindow(QWidget *parent = nullptr);
    ~authwindow();
    QString getLogin();
    QString getPass();

signals:
    void login_button_clicked();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);
    void on_lineEdit_2_textEdited(const QString &arg1);
    void on_loginPushButton_clicked();


private:
    Ui::authwindow *ui;
    QString m_username;
    QString m_userpass;

};


#endif // AUTHWINDOW_H
