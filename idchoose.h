#ifndef IDCHOOSE_H
#define IDCHOOSE_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql/QSqlRecord>

namespace Ui {
class idchoose;
}

class idchoose : public QWidget
{
    Q_OBJECT

public:
    explicit idchoose(QWidget *parent = nullptr);
    ~idchoose();
    QString m_id;
    int x;
    int fl=0;


signals:
     void idButton_clicked();

private slots:
    void on_idButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

private:
    Ui::idchoose *ui;
    QString db_input; // строка для отправки запроса к БД
};

#endif // IDCHOOSE_H
