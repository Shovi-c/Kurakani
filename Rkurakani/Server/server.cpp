#include "server.h"
#include "ui_server.h"

Server::Server(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Server)
{
    ui->setupUi(this);

    // Set the initial icon on the button
    QPixmap pixmap(":/start/img/PngItem_2854427.png");
    QSize buttonSize = QSize(45, 45);
    QPixmap scaledPixmap = pixmap.scaled(buttonSize, Qt::KeepAspectRatio);
    QIcon icon1(scaledPixmap);
    ui->start->setIcon(icon1);
    ui->start->setIconSize(scaledPixmap.size());





    // Connect the button's clicked signal to the slot to change the icon
    connect(ui->pushButton, &QPushButton::clicked, this, &Server::on_start_clicked);
}




Server::~Server()
{
    delete ui;

}
void Server::on_start_clicked()
{
    if (iconState) {
        // If iconState is true, set the first icon
        QIcon icon1(":/start/img/PngItem_2854427.png");
        ui->start->setIcon(icon1);
    } else {
        // If iconState is false, set the second icon
        QIcon icon2(":/start/img/stop-button.png");
        ui->start->setIcon(icon2);
    }

    // Toggle the icon state
    iconState = !iconState;
}













