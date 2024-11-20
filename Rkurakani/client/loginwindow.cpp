#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "mainwindow.h"
#include "signup.h"
#include<QMessageBox>


Loginwindow::Loginwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Loginwindow)
{
    ui->setupUi(this);




}

Loginwindow::~Loginwindow()
{
    delete ui;
}

void Loginwindow::on_LoginOk_clicked()//directs to main window
{
    QString username = ui->Userline->text();

    QString password = ui->PLine->text();

    // push the username and password form database to open client ui
    if (username == "test" && password =="test")
    {
        hide();
        MainWindow *w = new MainWindow();
        w->show();

    }
    //  to open server ui
    else if (username=="psss"&&password=="psss")
    {
        hide();
        Server *server =new Server();
        server->show();

    }
    else //shows incorrect if username and password isn't available in database
    {
        QMessageBox::about(this, "Incorrect password", "Please Check User ID and Password");
    }
}


void Loginwindow::on_Sup_clicked()//Directs to Sign Up window
{
    hide();
    Signup *s=new Signup();
    s->show();


}




