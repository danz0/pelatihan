#ifndef QTMENU_H
#define QTMENU_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class qtmenu;
}

class qtmenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit qtmenu(QWidget *parent = 0);
    ~qtmenu();

private slots:
    void on_actionPESAN_1_triggered();

    void on_actionPESAN_2_triggered();

    void on_actionExit_triggered();

private:
    Ui::qtmenu *ui;
};

#endif // QTMENU_H
