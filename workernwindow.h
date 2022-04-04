#ifndef WORKERNWINDOW_H
#define WORKERNWINDOW_H

#include <QWidget>

namespace Ui {
class workernwindow;
}

class workernwindow : public QWidget
{
    Q_OBJECT

public:
    explicit workernwindow(QWidget *parent = nullptr);
    ~workernwindow();

private:
    Ui::workernwindow *ui;
};

#endif // WORKERNWINDOW_H
