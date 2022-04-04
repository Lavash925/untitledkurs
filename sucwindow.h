#ifndef SUCWINDOW_H
#define SUCWINDOW_H

#include <QWidget>

namespace Ui {
class sucwindow;
}

class sucwindow : public QWidget
{
    Q_OBJECT

public:
    explicit sucwindow(QWidget *parent = nullptr);
    ~sucwindow();

signals:
    void closeButton_clicked();

private slots:
    void on_closeButton_clicked();

private:
    Ui::sucwindow *ui;
};

#endif // SUCWINDOW_H
