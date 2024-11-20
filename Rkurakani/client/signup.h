#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>  // Include the QDialog header file

namespace Ui {
class Signup;
}

class Signup : public QDialog  // Inherit only from QDialog
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Signup *ui;
};

#endif // SIGNUP_H
