#include "signup.h"
#include "ui_signup.h"
#include "loginwindow.h"
#include <QMessageBox>


Signup::Signup(QWidget *parent) :
    QDialog(parent),  // Call to QDialog constructor
    ui(new Ui::Signup)  // Initialize ui pointer
{
    ui->setupUi(this);  // Set up the UI
    ui->Unewline->setMaxLength(12);  // Max length for username is 12
    ui->Pnewline->setMaxLength(8);  // Max length for password is 8
    ui->Cnewline->setMaxLength(8);   //Max length for Cpassword is 8
}

Signup::~Signup()
{
    delete ui;  // Clean up
}

void Signup::on_pushButton_2_clicked()//directs to login Window
{
    hide();
    Loginwindow *l= new Loginwindow();
    l->show();
}


void Signup::on_pushButton_clicked()
{
    QString newuser = ui->Unewline->text(); //to take data from the user and store in database
    QString npassword = ui->Pnewline->text();//to take data from the user and store in database
    QString cpassword = ui->Cnewline->text();//to take data from the user and store in database
    if (newuser.length()>=4 && npassword.length()>=4)//to set the condition for password
    {


        if (npassword==cpassword) // to check for error and different meassages for error
        {
            if(ui->radioButton->isChecked())
            {
                hide();
                Loginwindow *l= new Loginwindow();
                QMessageBox::StandardButton reply=QMessageBox::question(this, "Sign up","You have been sign up in Kurakani? \n Do you want to log in?",QMessageBox::Yes | QMessageBox::No);

                if (reply==QMessageBox::Yes)
                {
                    l->show();
                }
                else
                {
                    QApplication::quit();

                }

            }

            else
            {
                QMessageBox::about(this, "Terms and Conditions", "Cannot Sign up unless Terms and condition is Agreed.");
            }
        }

        else
        {
            QMessageBox::about(this, "Password Unmatched", "Password Unmatched");
        }
    }

    else
    {
        QMessageBox::about(this, "Insufficent", "Username and Password should contain at least 4 character");
    }
}

