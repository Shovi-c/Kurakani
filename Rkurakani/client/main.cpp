#include "mainwindow.h"
#include "loginwindow.h"
#include "signup.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Loginwindow l;  // to  enter login window
    l.show();

    return a.exec();
}
