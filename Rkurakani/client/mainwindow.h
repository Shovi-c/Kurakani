#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
#include <QMap>
#include <QListWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Slot for adding a friend to the QListWidget
    void on_Addfriend_clicked();

    // Slot for handling the Send button or the Enter key in the MMS field
    void on_Send_clicked();

    // Slot for handling item clicks in the QListWidget
    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;

    // List of predefined names
    QStringList names;

    // Map to hold messages associated with each name
    QMap<QString, QString> messagesMap;
};

#endif // MAINWINDOW_H
