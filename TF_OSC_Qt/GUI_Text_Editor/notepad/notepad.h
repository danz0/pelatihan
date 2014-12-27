#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

namespace Ui {
class notepad;
}

class notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit notepad(QWidget *parent = 0);
    ~notepad();

private slots:
    void on_actionSave_triggered();

    void on_actionOpen_triggered();

    void on_actionClear_triggered();

    void on_actionExit_triggered();

private:
    Ui::notepad *ui;
};

#endif // NOTEPAD_H
