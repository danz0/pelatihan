#include "qttimer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qttimer w;
    w.show();

    return a.exec();
}
