#include "qttimer.h"
#include "ui_qttimer.h"

uint var_count;

qttimer::qttimer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::qttimer)
{
    ui->setupUi(this);
    my_timer = new QTimer(this);
    QObject::connect(my_timer,SIGNAL(timeout()),this,SLOT(counter()));
}

qttimer::~qttimer()
{
    delete ui;
}

void qttimer::counter(){
    var_count++;
    ui->lcdNumber->display(QString::number(var_count));
}


void qttimer::on_actionStart_triggered()
{
    my_timer->start(1000);
}

void qttimer::on_actionStop_triggered()
{
    my_timer->stop();
    var_count=0;
    ui->lcdNumber->display(QString::number(var_count));
}

void qttimer::on_actionExit_triggered()
{
    QApplication::quit();
}
