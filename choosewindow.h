#ifndef CHOOSEWINDOW_H
#define CHOOSEWINDOW_H

#include <QWidget>

namespace Ui {
class choosewindow;
}

class choosewindow : public QWidget
{
    Q_OBJECT

public:
    explicit choosewindow(QWidget *parent = nullptr);
    ~choosewindow();

signals:
    void logButton_clicked();
    void fizButton_clicked();
    void urButton_clicked();

private slots:
    void on_fizButton_clicked();
    void on_urButton_clicked();
    void on_logButton_clicked();

private:
    Ui::choosewindow *ui;
};

#endif // CHOOSEWINDOW_H
