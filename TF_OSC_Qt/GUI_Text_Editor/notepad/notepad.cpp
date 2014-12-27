#include "notepad.h"
#include "ui_notepad.h"

notepad::notepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::notepad)
{
    ui->setupUi(this);
}

notepad::~notepad()
{
    delete ui;
}

void notepad::on_actionSave_triggered()
{
    QString filename;
    QString filesave=QFileDialog::getSaveFileName(this,"save text","","Text File(*.txt)");

    if(filesave.isEmpty()){return;}

    QStringList filenameparse = filesave.split(".");

    if(filenameparse.count()==2){
        filename=filenameparse[0];
    }
    else if(filenameparse.count()==1){
        filename=filesave;
    }

    filename += ".txt";

    QFile filestream(filename);
    if(!filestream.open(QFile::WriteOnly|QFile::Text|QFile::Truncate)){
        QMessageBox::critical(this,"Failed","File failed to save");
        return;
    }

    QTextStream filewrite(&filestream);

    filewrite << ui->txtText->toPlainText();

    filestream.flush();
    filestream.close();
}

void notepad::on_actionOpen_triggered()
{
    QString filename;
    QString fileopen=QFileDialog::getOpenFileName(this,"load text","","Text File (*.txt)");
    if(fileopen.isEmpty()){return;}
    filename=fileopen;

    QFile filestream(filename);

    if(!filestream.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::critical(this,"Failed","File failed to open");
        return;
    }

    QTextStream fileread(&filestream);

    while(!fileread.atEnd()){
        QString received=fileread.readAll();
        ui->txtText->insertPlainText(received);
    }

    filestream.close();
}

void notepad::on_actionClear_triggered()
{
    ui->txtText->clear();
}

void notepad::on_actionExit_triggered()
{
    QApplication::quit();
}
