#ifndef QTTIMER_H
#define QTTIMER_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class qttimer;
}

class qttimer : public QMainWindow
{
    Q_OBJECT

public:
    explicit qttimer(QWidget *parent = 0);
    ~qttimer();

private:
    Ui::qttimer *ui;
    QTimer* my_timer;

private slots:
    void counter();
    void on_actionStart_triggered();
    void on_actionStop_triggered();
    void on_actionExit_triggered();
};

#endif // QTTIMER_H
