#ifndef URFACEWINDOW_H
#define URFACEWINDOW_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql/QSqlRecord>

namespace Ui {
class urfacewindow;
}

class urfacewindow : public QWidget
{
        Q_OBJECT

    public:
        explicit urfacewindow(QWidget *parent = nullptr);
        ~urfacewindow();
        QString getCompany();
        QString getINN();
        QString getName();
        QString getStreet();
        QString getHouse();
        QString getCardNumber();
        QString getBonus();
        QString db_input; // строка для отправки запроса к БД
        int rayon;


    signals:
        void urorder_button_clicked();

    private slots:
        void on_lineEdit_textEdited(const QString &company);
        void on_lineEdit_2_textEdited(const QString &cardnumber);
        void on_lineEdit_3_textEdited(const QString &inn);
        void on_lineEdit_4_textEdited(const QString &street);
        void on_lineEdit_5_textEdited(const QString &house);
        void on_lineEdit_6_textEdited(const QString &name);
        void on_lineEdit_7_textEdited(const QString &bonus2);
        void on_urorderPushButton_clicked();

        void on_radioButton_clicked();

        void on_radioButton_2_clicked();

        void on_radioButton_3_clicked();

        void on_radioButton_4_clicked();

        void on_radioButton_5_clicked();

private:
        Ui::urfacewindow *ui;
        QString m_company;
        QString m_inn;
        QString m_name;
        QString m_street;
        QString m_house;
        QString m_cardnumber;
        QString m_bonus2;
};

#endif // URFACEWINDOW_H
