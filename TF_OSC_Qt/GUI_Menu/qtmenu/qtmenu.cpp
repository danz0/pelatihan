#include "qtmenu.h"
#include "ui_qtmenu.h"

qtmenu::qtmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::qtmenu)
{
    ui->setupUi(this);
}

qtmenu::~qtmenu()
{
    delete ui;
}

void qtmenu::on_actionPESAN_1_triggered()
{
    QMessageBox::information(this,"jomblo","Saya Jomblo");
}

void qtmenu::on_actionPESAN_2_triggered()
{
    QMessageBox::critical(this,"awas","AWAS JOMBLO !");
}

void qtmenu::on_actionExit_triggered()
{
    QApplication::quit();
}
