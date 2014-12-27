#include "kalkul.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    kalkul w;
    w.show();

    return a.exec();
}
