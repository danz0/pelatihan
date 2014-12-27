#include "hello.h"
#include "ui_hello.h"

hello::hello(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hello)
{
    ui->setupUi(this);
    QMessageBox::information(this,"Coba","HELLO WORLD");
}

hello::~hello()
{
    delete ui;
}
