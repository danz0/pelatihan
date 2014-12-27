#ifndef KALKUL_H
#define KALKUL_H

#include <QMainWindow>

namespace Ui {
class kalkul;
}

class kalkul : public QMainWindow
{
    Q_OBJECT

public:
    explicit kalkul(QWidget *parent = 0);
    ~kalkul();

private slots:
    void on_btnReset_clicked();

    void on_btnClear_clicked();

    void on_btnKey_1_clicked();

    void on_btnKey_2_clicked();

    void on_btnKey_3_clicked();

    void on_btnKey_4_clicked();

    void on_btnKey_5_clicked();

    void on_btnKey_6_clicked();

    void on_btnKey_7_clicked();

    void on_btnKey_8_clicked();

    void on_btnKey_9_clicked();

    void on_btnKey_0_clicked();

    void on_btnGo_clicked();

private:
    Ui::kalkul *ui;
};

#endif // KALKUL_H
