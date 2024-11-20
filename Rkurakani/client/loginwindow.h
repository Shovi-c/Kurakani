#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>

namespace Ui {
class Loginwindow;
}

class Loginwindow : public QDialog
{
    Q_OBJECT

public:
    explicit Loginwindow(QWidget *parent = nullptr);
    ~Loginwindow();

private slots:
    void on_LoginOk_clicked();

    void on_Sup_clicked();

    void on_Userline_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::Loginwindow *ui;
};

#endif // LOGINWINDOW_H
