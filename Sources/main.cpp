#include <QtGui/QApplication>
#include "dices.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dices w;
    w.show();
    return a.exec();
}
