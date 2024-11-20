#ifndef SERVER_H
#define SERVER_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class Server;
}

class Server : public QDialog
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = nullptr);
    ~Server();

private slots:
    void on_pushButton_3_windowIconChanged(const QIcon &icon);

    void on_start_windowIconChanged(const QIcon &icon);

    void on_start_clicked();

private:
    Ui::Server *ui;
    bool iconState;
};

#endif // SERVER_H
