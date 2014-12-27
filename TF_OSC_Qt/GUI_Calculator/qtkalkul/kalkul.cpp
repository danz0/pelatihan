#include "kalkul.h"
#include "ui_kalkul.h"

kalkul::kalkul(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kalkul)
{
    ui->setupUi(this);
}

kalkul::~kalkul()
{
    delete ui;
}

void kalkul::on_btnReset_clicked()
{
    ui->txtIn1->clear();
    ui->txtIn2->clear();
    ui->txtOut->clear();
}

void kalkul::on_btnClear_clicked()
{
    if(ui->rbtIn1->isChecked()){
        ui->txtIn1->clear();
    }
    else if(ui->rbtIn2->isChecked()){
        ui->txtIn2->clear();
    }
}

void kalkul::on_btnKey_1_clicked()
{
    QString var;
    if(ui->rbtIn1->isChecked()){
        if(ui->txtIn1->text().length()<5){
            var=ui->txtIn1->text();
            var+="1";
            ui->txtIn1->setText(var);
        }
    }
    else if(ui->rbtIn2->isChecked()){
        if(ui->txtIn2->text().length()<5){
            var=ui->txtIn2->text();
            var+="1";
            ui->txtIn2->setText(var);
        }
    }

}

void kalkul::on_btnKey_2_clicked()
{
    QString var;
    if(ui->rbtIn1->isChecked()){
        if(ui->txtIn1->text().length()<5){
            var=ui->txtIn1->text();
            var+="2";
            ui->txtIn1->setText(var);
        }
    }
    else if(ui->rbtIn2->isChecked()){
        if(ui->txtIn2->text().length()<5){
            var=ui->txtIn2->text();
            var+="2";
            ui->txtIn2->setText(var);
        }
    }
}

void kalkul::on_btnKey_3_clicked()
{
    QString var;
    if(ui->rbtIn1->isChecked()){
        if(ui->txtIn1->text().length()<5){
            var=ui->txtIn1->text();
            var+="3";
            ui->txtIn1->setText(var);
        }
    }
    else if(ui->rbtIn2->isChecked()){
        if(ui->txtIn2->text().length()<5){
            var=ui->txtIn2->text();
            var+="3";
            ui->txtIn2->setText(var);
        }
    }
}

void kalkul::on_btnKey_4_clicked()
{
    QString var;
    if(ui->rbtIn1->isChecked()){
        if(ui->txtIn1->text().length()<5){
            var=ui->txtIn1->text();
            var+="4";
            ui->txtIn1->setText(var);
        }
    }
    else if(ui->rbtIn2->isChecked()){
        if(ui->txtIn2->text().length()<5){
            var=ui->txtIn2->text();
            var+="4";
            ui->txtIn2->setText(var);
        }
    }
}

void kalkul::on_btnKey_5_clicked()
{
    QString var;
    if(ui->rbtIn1->isChecked()){
        if(ui->txtIn1->text().length()<5){
            var=ui->txtIn1->text();
            var+="5";
            ui->txtIn1->setText(var);
        }
    }
    else if(ui->rbtIn2->isChecked()){
        if(ui->txtIn2->text().length()<5){
            var=ui->txtIn2->text();
            var+="5";
            ui->txtIn2->setText(var);
        }
    }
}

void kalkul::on_btnKey_6_clicked()
{
    QString var;
    if(ui->rbtIn1->isChecked()){
        if(ui->txtIn1->text().length()<5){
            var=ui->txtIn1->text();
            var+="6";
            ui->txtIn1->setText(var);
        }
    }
    else if(ui->rbtIn2->isChecked()){
        if(ui->txtIn2->text().length()<5){
            var=ui->txtIn2->text();
            var+="6";
            ui->txtIn2->setText(var);
        }
    }
}

void kalkul::on_btnKey_7_clicked()
{
    QString var;
    if(ui->rbtIn1->isChecked()){
        if(ui->txtIn1->text().length()<5){
            var=ui->txtIn1->text();
            var+="7";
            ui->txtIn1->setText(var);
        }
    }
    else if(ui->rbtIn2->isChecked()){
        if(ui->txtIn2->text().length()<5){
            var=ui->txtIn2->text();
            var+="7";
            ui->txtIn2->setText(var);
        }
    }
}

void kalkul::on_btnKey_8_clicked()
{
    QString var;
    if(ui->rbtIn1->isChecked()){
        if(ui->txtIn1->text().length()<5){
            var=ui->txtIn1->text();
            var+="8";
            ui->txtIn1->setText(var);
        }
    }
    else if(ui->rbtIn2->isChecked()){
        if(ui->txtIn2->text().length()<5){
            var=ui->txtIn2->text();
            var+="8";
            ui->txtIn2->setText(var);
        }
    }
}

void kalkul::on_btnKey_9_clicked()
{
    QString var;
    if(ui->rbtIn1->isChecked()){
        if(ui->txtIn1->text().length()<5){
            var=ui->txtIn1->text();
            var+="9";
            ui->txtIn1->setText(var);
        }
    }
    else if(ui->rbtIn2->isChecked()){
        if(ui->txtIn2->text().length()<5){
            var=ui->txtIn2->text();
            var+="9";
            ui->txtIn2->setText(var);
        }
    }
}

void kalkul::on_btnKey_0_clicked()
{
    QString var;
    if(ui->rbtIn1->isChecked()){
        if(ui->txtIn1->text().length()<5){
            var=ui->txtIn1->text();
            var+="0";
            ui->txtIn1->setText(var);
        }
    }
    else if(ui->rbtIn2->isChecked()){
        if(ui->txtIn2->text().length()<5){
            var=ui->txtIn2->text();
            var+="0";
            ui->txtIn2->setText(var);
        }
    }
}

void kalkul::on_btnGo_clicked()
{
    uint v1,v2,v3;

    v1=ui->txtIn1->text().toInt();
    v2=ui->txtIn2->text().toInt();

    if(ui->rbtPlus->isChecked()){
        v3=v1+v2;
    }
    else if(ui->rbtSub->isChecked()){
        v3=v1-v2;
    }
    else if(ui->rbtMul->isChecked()){
        v3=v1*v2;
    }
    else if(ui->rbtDiv->isChecked()){
        v3=v1/v2;
    }

    ui->txtOut->setText(QString::number(v3));
}
