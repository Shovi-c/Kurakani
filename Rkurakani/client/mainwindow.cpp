#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStandardItemModel>
#include <QIcon>
#include <QPixmap>
#include <QListWidgetItem>
#include <QMessageBox>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Predefined list of names
    names = {"test1", "test2", "test3"};

    // For file icon only
    QPixmap pixmap(":/fileimg/img/sendfile.png");
    QSize buttonSize = QSize(64, 64);
    QPixmap scaledPixmap = pixmap.scaled(buttonSize, Qt::KeepAspectRatio);
    QIcon icon(scaledPixmap);
    ui->pushButton_2->setIcon(icon);
    ui->pushButton_2->setIconSize(scaledPixmap.size());

    // Connect the line edit's returnPressed signal to searchName() slot for searching
    connect(ui->searchLineEdit, &QLineEdit::returnPressed, this, &MainWindow::on_Addfriend_clicked);

    // Connect the "Send" button to the on_Send_clicked() slot
    connect(ui->Send, &QPushButton::clicked, this, &MainWindow::on_Send_clicked);
    connect(ui->mms,&QLineEdit::returnPressed,this,&MainWindow::on_Send_clicked);

    // Populating the messages map with names and corresponding content
    messagesMap["Sanjay"] = "Sanjay: Hello, how are you?";
    messagesMap["Pratyush"] = "Pratyush: I'm doing great, thank you!";
    messagesMap["Sachin"] = "Sachin: How's everything going?";
    messagesMap["Shoviyat"] = "Shoviyat: It's been a while, let's catch up!";

    ui->frame->hide();  // Hide frame initially

    // Clear textEdit at the start
    ui->textEdit->clear();

    // Connect the signal from the list widget to the slot
    connect(ui->listWidget, &QListWidget::itemClicked, this, &MainWindow::on_listWidget_itemClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Slot to add a friend to the QListWidget (triggered by "Add Friend" button click)
void MainWindow::on_Addfriend_clicked()
{
    QString friendName = ui->searchLineEdit->text();

    if (friendName.isEmpty()) {
        QMessageBox::warning(this, "Empty Name", "Please enter a name before adding.");
        return;
    }

    // Check if the name already exists in the QListWidget (duplicate check)
    bool alreadyAddedInListWidget = false;
    for (int i = 0; i < ui->listWidget->count(); ++i) {
        QListWidgetItem *item = ui->listWidget->item(i);
        if (item->text() == friendName) {
            alreadyAddedInListWidget = true;
            delete item;
            break;
        }
    }

    if (alreadyAddedInListWidget) {
        ui->listWidget->insertItem(0,friendName);
        ui->searchLineEdit->clear();
        return;
    }

    // Check if the name is in the QStringList (names)
    bool alreadyAddedInNames = false;
    for (const QString &name : names) {
        if (name == friendName) {
            alreadyAddedInNames = true;
            break;
        }
    }

    if (alreadyAddedInNames) {
        ui->listWidget->insertItem(1,friendName);  // Add name to the QListWidget
        ui->searchLineEdit->clear();          // Clear input field after adding
    } else {
        QMessageBox::information(this, "Name Not Found", "The username doesn't exist.");
    }
}


// Slot to handle Send button or Enter key press in MMS field
void MainWindow::on_Send_clicked()
{
    QString MMS = ui->mms->text();

    QString sachin = R"(
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠋⠀⡀⠄⠘⠙⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⡀⠐⢀⠀⠐⢨⣞⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⡈⠐⣤⡻⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⢓⢿⣿⣿⣿⣿⣿⣿⣿⠟⠠⠈⠘⠳⠟⠓⠻⢽⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣟⠛⣩⣻⡿⣽⡿⣿⣿⠟⠃⢠⠁⡡⠀⠐⠈⡀⠸⣷⢛⣿⣿⣿⣿⣿
⣿⣿⣿⣾⠐⣿⣿⣿⣿⢹⡟⠁⠀⠌⠄⠒⠀⠀⢂⠁⡀⠀⠺⢿⣿⣿⣿⣿⣿
⣿⢟⣦⣿⠿⣛⣭⣵⣶⣿⣐⠀⠠⠌⡈⠔⠀⠈⠀⠀⠀⠀⠡⠀⠙⣿⣿⣿⣿
⣏⡏⡿⠉⣶⣿⣿⣿⣿⣿⣿⣄⠀⠀⠐⠈⡰⠁⠌⠄⠡⠌⠁⠀⠀⣸⣾⣿⣿
⣿⣿⢰⢱⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠈⠀⠉⠀⠀⠀⠀⣀⢹⣿⣿⣿
⡀⢻⢼⡘⢸⣿⣿⣿⣿⣿⣿⣿⢿⣿⢇⣤⣆⢄⢀⠀⣀⣤⣶⣿⣿⣎⢿⣹⣹
⣯⢸⡼⣷⡺⠿⣿⣿⣿⢟⣿⡿⡓⣽⣿⣿⣿⣿⣶⣭⣿⣿⣿⣿⣿⢷⣨⢧⣿
⣿⡳⡌⠻⢷⣬⣭⡍⣓⣸⣷⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⣿⢞⣵⣿⣿
⣿⣿⣮⣿⣯⣹⢿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣻⣭⣟⣥⣾⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣷⣦⣿⣽⢿⣿⣿⢿⣟⠿⣛⣻⡯⣾⡟⣻⣷⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⢄⣩⣶⣿⣖⣾⣽⡌⣨⣽⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⠿⠋⡉⠌⣿⣿⣿⣿⣿⣿⣿⠙⡟⠻⠉⢏⠽⢿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣠⣋⣤⢤⣄⡏⣿⣿⣿⣿⣏⣴⣤⡦⢷⣮⣈⣸⢿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣾⣾⣿⣿⣿⣿⣭⣽⣾⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀
 )";  // ASCII Chicken

    QString ess = R"(
⣿⢟⣿⣿⣿⣿⣿⣿⣿⡿⣿⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣟⢿⣿⣿⣿⣿⣿⣿⣿
⡟⢰⣿⣿⣿⣿⡿⣟⣿⠟⠻⠜⠀⠿⢟⣾⣽⣿⣿⣿⣿⣿⣷⢽⣿⣿⣿⣿⣿⣿
⣇⢿⣿⢿⢿⣹⣾⣿⣷⢁⡀⠰⠇⣀⠀⣿⣿⣿⣿⡉⠉⣉⣎⠇⡶⣀⠉⢿⣿⣿
⣿⣶⣿⣹⣿⣽⡙⠢⠑⠐⠥⠐⠆⠠⠇⠀⠙⠣⠽⢻⢏⠣⣝⡸⢅⠧⣓⠄⢙⣿
⣿⣿⣿⣿⣟⣤⣰⠲⣀⡀⠀⠀⠀⠀⠀⠐⠖⢆⠠⠀⠎⡑⢦⡙⡎⡵⢪⠔⡀⢿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⢀⠀⠀⡀⠄⠀⡐⠠⠂⠵⣠⠐⢤⢫⡔⣣⠇⠐⡀⢸
⣿⣿⣿⣿⣿⣿⣿⣿⣿⡴⠈⠦⢑⠤⢈⠀⡐⠡⡝⡱⢥⠈⢰⠣⣜⠂⠄⠈⠀⢻
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠆⢀⢉⠰⣀⠹⢀⠰⣇⠹⡆⠀⠈⠇⣀⠈⠀⡆⢰⢸
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠈⠈⠗⣩⠙⠀⢹⡰⠋⠀⠈⠄⠃⣠⠐⣎⢀⣾⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡦⠀⠄⣴⣶⣿⠀⢧⠁⣴⠰⠆⡁⣿⣎⢄⠘⠇⢸
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠓⡌⣿⣿⣿⡌⠆⢰⣿⡏⣃⢸⣿⣿⢬⢀⣿⣾
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠂⣿⣿⣿⣧⠄⣿⣿⡧⠄⢿⣿⣿⡆⣼⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⣿⣿⣿⡏⡆⣿⣿⡇⡾⠸⣿⣿⢸⢸⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⡄⢿⣿⣿⣿⠆⢻⣿⣥⣠⣼⣿⣏⣀⣸⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⣀⣀⣾⣿⣿⣇⣀⣀⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿

 )";  // ASCII Buffalo

    QString mmm = R"(
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠁⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⢠⢦⠄⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⡿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⡐⣪⠤⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⡇⠀⠀⠈⠻⣿⣿⣿⣿⡿⠛⠛⠛⠁⠀⢉⡅⠲⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⡈⠠⠀⠀⠀⠈⠉⠁⠀⠀⠐⠀⠈⠐⣿⣶⡃⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣧⠀⠀⠀⠀⠀⠀⠀⢠⠐⠀⢀⠷⡘⠓⠛⠿⠦⠦⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣇⠀⠀⠀⣀⡄⠁⠈⢀⠹⣿⡴⠁⠀⢀⣜⣃⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⡆⠀⠘⢋⡄⠀⠀⠈⠀⠁⡃⠀⠸⣁⠋⠁⢆⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣷⠁⠀⠀⠀⠉⠙⠀⠀⠐⠒⣠⠎⠠⢶⠖⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣆⠀⠄⠀⠀⠀⢀⠂⠀⢀⣀⣀⠐⠀⠀⠀⡄⢸⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠖⠉⠙⠊⠀⣀⣤⣄⠀⡘⢿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀⢀⢀⡀⢠⣤⡾⢿⡿⡜⢀⢈⡊⢻⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠛⠀⠃⠻⡙⠢⠈⢉⣒⢼⠑⠀⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⡇⠀⠈⠠⠂⠀⠀⠠⡤⠀⠳⡄⠰⠿⠟⠙⠃⠀⠀⢸⣿⣿⣿⣿⣿
⣿⣿⣿⣿⡟⠁⠀⠀⠀⠀⠀⠂⠀⠁⠀⠀⠀⠀⠀⠀⠀⢀⣠⠙⢸⣿⣿⣿⣿⣿
⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⡀⢠⡀⣎⢲⠒⠛⠖⠀⣄⡁⣿⣿⣿⣿⣿
⣿⣿⣿⠃⠀⠈⠀⠀⠀⠀⠀⠈⠀⠀⠈⡃⢹⠙⠉⢇⠀⠀⣐⠀⠀⣿⣿⣿⣿⣿
⣿⣿⡟⠀⠀⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⢱⡈⡄⡃⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿
⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⢣⠢⠀⠀⠐⠕⠂⠀⠀⣿⣿⣿⣿⣿
⣿⡿⠀⠀⢀⠀⠀⠀⠀⠀⠀⠠⠀⡄⠀⠀⠀⠁⠀⠀⠀⢀⠉⠀⢸⣿⣿⣿⣿⣿
⣿⠏⠀⠀⠃⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠂⠀⠀⠀⠀⠠⠄⣿⣿⣿⣿⣿⣿
⣿⠀⠀⠀⠠⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⢄⠀⡀⠀⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿
⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠚⢀⠀⠀⠀⠀⣀⣄⣿⣿⣿⣿⣿⣿⣿
⣿⣇⠀⠀⠀⠰⠆⠀⠀⠁⠄⠂⠀⠀⠀⠀⠂⠀⠀⠀⠊⠻⠏⣾⣿⣿⣿⣿⣿⣿
⣿⣿⠠⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿
⣿⣿⠀⠀⠀⠀⡁⠀⠀⠀⠀⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣆⠀⠀⠀⠐⠦⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⢀⠀⠠⢰⣿⣿⣿⠟⠉⣍⢛⣿
⣿⣿⣿⡀⠈⠄⠐⠀⠀⠀⠰⡑⡷⠀⠀⠒⢁⠠⠀⠀⠀⣾⣿⠟⠃⠁⣴⡷⢁⣾
⣿⣿⣿⣧⠀⠀⠀⠀⠂⠀⠀⠀⠀⠀⠀⠀⠂⠀⠀⠀⢰⠟⠁⠀⡀⢸⡿⣡⣿⣿
⣿⣿⣿⣿⡄⠀⠀⡀⠀⢀⠀⡘⠆⠀⠐⠂⠁⠀⠀⢀⣄⠀⡄⠀⢈⠇⣴⣿⣿⣿
⣿⣿⣿⣿⣿⡄⠀⣡⢀⣤⡠⡛⠒⣧⠀⣄⢈⣀⣰⣼⠧⡉⢅⠸⢀⣾⣿⣿⣿⣿
⣿⣿⣿⣿⠛⠙⠂⠦⠚⠉⠀⠿⠄⠊⠀⠀⢈⠐⠊⢸⣗⣫⣥⣾⣿⣿⣿⣿⣿⣿
⣿⣿⣿⡁⠀⠀⣶⠂⠀⣀⡀⣷⠀⢀⠀⠁⢀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣷⣶⠀⠏⣀⠘⠊⠇⣠⣾⣿⣆⠠⠉⠃⢠⠡⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣷⣶⣶⣶⣶⣾⣿⣿⣿⣿⣿⣾⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

 )";  // ASCII Cat

    QString sovit = R"(
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⡿⡿⠿⠿⠿⢿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣤⣤⣤⣤⣤⣼
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠋⢹⣶⣾⣿⣿⣿⣿⣿⣶⣾⣽⣛⢿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⢛⡇⠈⠾⠾⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⡿⡷⡝⢿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⡿⣟⣯⣵⡾⠿⠿⣿⣿⠿⠿⠿⢿⣿⣶⣭⣽⣟⠻⢧⠋⡠⢠⡹⣿⣿⣿⣿
⣿⣿⣿⢟⢡⠾⠛⡫⠾⣯⣙⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣾⣭⣜⡳⣦⣄⠁⣧⢻⣿⣿⣿
⣿⡿⡱⣪⠴⣁⢕⣩⣾⣿⠟⠛⠉⡁⠀⣠⡖⠀⠉⠙⡛⢿⣿⣿⣿⣷⣬⣓⠘⢺⣿⣿⣿
⣿⡙⣼⣷⣫⣾⣿⡿⠋⠀⠀⢀⡾⠀⢼⣿⡇⠀⢀⣾⣿⠀⠈⠻⣿⣿⣿⣿⣷⣧⡽⣿⣿
⡇⣸⣿⣿⣿⣿⠟⠀⠀⠀⠀⠍⠀⠀⣠⣿⡇⠀⡸⢿⣿⡇⠀⠀⠙⣿⣿⣿⣿⣿⣷⡹⣿
⡧⣾⢿⠿⠛⢁⠀⠀⠀⠀⢠⣴⣾⣿⣿⣿⣿⡄⢳⣿⣮⡁⠀⠀⠀⠸⣿⣿⣿⣿⣿⣇⣿
⣇⠾⣸⡤⠝⠁⠀⠀⠀⡾⠒⣉⠛⢹⣿⣿⡽⠿⠾⠿⠿⢁⠀⠀⠀⠀⢗⣡⢡⠈⣿⣿⣿
⣿⡼⣿⣷⣒⠁⠀⠀⣷⡇⣦⣾⣷⢸⢻⣿⡏⣴⣨⣿⣮⡿⢀⠀⠀⠀⢸⡟⡞⡗⣿⣿⣿
⣿⣿⣜⠟⢟⣏⢲⣥⢿⣿⣯⣭⣭⢄⠜⢛⣳⣹⠿⠿⢟⣿⠇⠀⠀⢠⢸⡧⢷⢇⣿⢇⣿
⣿⣿⣿⣦⣸⢿⣧⠸⣜⣿⠟⢙⡵⠁⣸⣿⣿⣿⣭⣝⣭⡝⣠⡢⢀⠈⡯⣖⣉⣼⢏⣼⣿
⣿⣿⣿⣿⣿⣷⣬⣛⠶⢠⣶⣿⣷⡤⠙⣻⣿⣿⣿⠿⠋⠐⣟⣵⣼⣳⣬⡾⣋⣵⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⠟⣼⣿⣿⡿⢟⣤⣭⣭⡅⣀⣀⣂⣞⣟⣿⣯⣭⣷⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⢟⣡⣾⡿⡫⠉⠀⢘⣛⠟⠿⠭⣜⣫⣴⡘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⡿⣻⣵⣿⣿⢫⠞⠁⢀⣶⣧⣍⢻⣛⣛⠏⠻⠿⠷⠛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⡏⣴⣿⣿⠟⢑⣥⠀⡀⣭⣿⡟⠿⣛⠿⣿⣧⠙⠇⠀⡀⣙⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣏⠛⣉⣤⣾⣿⣿⠠⠃⣇⣉⠁⡜⠉⠳⢠⡙⡆⠐⣿⣿⡘⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⢇⡇⠀⠋⢹⡄⡗⠛⣧⢹⣧⠀⢸⡜⣿⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⢈⣿⣜⠦⠼⡁⠣⣤⠏⣸⣏⠇⢸⡇⣿⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⠁⠨⣉⣿⣾⣿⡷⠮⠴⠿⣻⣿⠆⠘⢷⣿⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⡿⣠⣤⡶⢶⣶⢂⣤⠠⠤⠍⣀⠀⢀⠀⣻⣿⠇⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⡏⣶⣮⡭⣷⣶⡎⡿⢸⣿⣭⣽⣿⣶⣕⢻⢹⡎⢿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⡿⣼⣿⣿⣿⣒⣉⣁⡁⢝⣛⣛⣿⣿⣿⣶⢀⣿⣿⣸⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⡿⣹⣿⣿⣿⣿⣿⣿⡗⡽⡊⣿⣿⣿⣿⣿⣏⠙⠻⠙⢀⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⢯⡴⣮⡹⣛⢵⣿⣿⣿⠂⣱⣿⢸⣯⡛⠿⠿⡿⠗⣀⣬⢻⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⡘⠓⢟⠺⠟⣷⡶⠍⣉⡁⣿⣿⢉⢭⣶⠶⣿⣹⡿⣼⠻⣸⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣇⢚⣖⡠⢉⣀⠼⠟⣵⣿⣿⡞⠀⢙⣙⡁⣖⡣⢶⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⡼⣿⣿⠇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣿⣿⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣷⢻⣿⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣿⡇⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⡿⠛⢥⣿⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢷⣿⡔⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⡿⠟⠻⠅⠘⣓⠂⠈⠢⡹⣿⣿⣿⣿⣿⣿⣿⣿⢟⠜⠉⠄⠤⢉⡛⢿⣿⣿⣿⣿⣿⣿⣿
⣠⠥⠀⠁⠀⠉⠁⠤⢜⣀⣼⣿⣿⣿⣿⣿⣿⣏⣨⠀⠐⠛⠃⠀⠀⠀⣹⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣉⣉⣉⣉⣉⣉⣉⣉⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 )";  // ASCII Anaconda

    // Check which MMS code to handle and show respective ASCII art
    if (MMS == "#Sachin") {
        ui->textEdit->append("\n You: " + sachin);
        ui->mms->clear();
    }
    else if (MMS == "#Sanjay") {
        ui->textEdit->append("\n You: " + ess);  // Displaying buffalo ASCII art for 'Sanjay'
        ui->mms->clear();
    }
    else if (MMS == "#Pratyush") {
        ui->textEdit->append("\n You: " + mmm);  // Displaying cat ASCII art for 'Pratyush'
        ui->mms->clear();
    }
    else if (MMS == "#Shoviyat") {
        ui->textEdit->append("\n You: " + sovit);  // Displaying anaconda ASCII art for 'Shoviyat'
        ui->mms->clear();
    }
    else {
        if (!MMS.isEmpty()) {
            ui->textEdit->append("\n You: " + MMS);  // Append the message to the textEdit
            ui->mms->clear();
        }
    }
}



// Slot to handle item clicked in QListWidget
void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString selectedName = item->text();

    // Check if the selected name has a corresponding message in the map

    if (messagesMap.contains(selectedName)) {
        ui->frame->show();
        ui->textBrowser->setText(selectedName);
        ui->textEdit->setPlainText(messagesMap[selectedName]);
    } else {
        ui->textBrowser->clear();
        ui->textEdit->clear();
        ui->frame->hide();
    }


}
