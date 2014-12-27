#include "qtmenu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qtmenu w;
    w.show();

    return a.exec();
}
