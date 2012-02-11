#ifndef DICES_H
#define DICES_H

#include <QMainWindow>
#include "randomize.h"
#include <QString>
#include <sstream>

namespace Ui {
    class Dices;
}

class Dices : public QMainWindow {
    Q_OBJECT
public:
    Dices(QWidget *parent = 0);
    ~Dices();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Dices *ui;

private slots:
    void on_pushButtonValider_clicked();
};

#endif // DICES_H
