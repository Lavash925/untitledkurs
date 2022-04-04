#ifndef FIZFACEWINDOW_H
#define FIZFACEWINDOW_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql/QSqlRecord>

namespace Ui {
class fizfacewindow;
}

class fizfacewindow : public QWidget
{
    Q_OBJECT

public:
    explicit fizfacewindow(QWidget *parent = nullptr);
    ~fizfacewindow();
    QString getFIO();
    QString getStreet();
    QString getHouse();
    QString getAparts();
    QString getCardNumber();
    QString getBonus();
    QString getPhone();
    int rayon;
    QString db_input; // строка для отправки запроса к БД


signals:
    void fizorder_button_clicked();

private slots:
    void on_lineEdit_textEdited(const QString &fio);
    void on_lineEdit_2_textEdited(const QString &cardnumber);
    void on_lineEdit_4_textEdited(const QString &house);
    void on_lineEdit_5_textEdited(const QString &aparts);
    void on_lineEdit_6_textEdited(const QString &street);
    void on_lineEdit_7_textEdited(const QString &bonus1);
    void on_lineEdit_8_textEdited(const QString &phone);
    void on_fizorderPushButton_clicked();


    void on_radioButton_clicked();
    void on_radioButton_2_clicked();
    void on_radioButton_3_clicked();
    void on_radioButton_4_clicked();
    void on_radioButton_5_clicked();

private:
    Ui::fizfacewindow *ui;
    QString m_fio;
    QString m_street;
    QString m_house;
    QString m_aparts;
    QString m_cardnumber;
    QString m_bonus1;
    QString m_phone;
};


#endif // FIZFACEWINDOW_H
