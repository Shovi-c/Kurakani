/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QFrame *KurakaniLogin;
    QLabel *Loginlabel;
    QPushButton *start;
    QFrame *frame;
    QTextBrowser *textBrowser;
    QListWidget *listWidget;
    QPushButton *pushButton_2;
    QFrame *frame_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QTextBrowser *textBrowser_2;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName("Server");
        Server->resize(600, 700);
        Server->setMaximumSize(QSize(600, 700));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        Server->setWindowIcon(icon);
        KurakaniLogin = new QFrame(Server);
        KurakaniLogin->setObjectName("KurakaniLogin");
        KurakaniLogin->setEnabled(true);
        KurakaniLogin->setGeometry(QRect(210, 10, 151, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(KurakaniLogin->sizePolicy().hasHeightForWidth());
        KurakaniLogin->setSizePolicy(sizePolicy);
        KurakaniLogin->setFrameShape(QFrame::Shape::StyledPanel);
        KurakaniLogin->setFrameShadow(QFrame::Shadow::Raised);
        Loginlabel = new QLabel(KurakaniLogin);
        Loginlabel->setObjectName("Loginlabel");
        Loginlabel->setGeometry(QRect(10, 0, 131, 31));
        sizePolicy.setHeightForWidth(Loginlabel->sizePolicy().hasHeightForWidth());
        Loginlabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font.setPointSize(16);
        font.setBold(false);
        font.setStrikeOut(false);
        Loginlabel->setFont(font);
        Loginlabel->setTextFormat(Qt::TextFormat::MarkdownText);
        Loginlabel->setIndent(1);
        start = new QPushButton(Server);
        start->setObjectName("start");
        start->setGeometry(QRect(90, 60, 71, 61));
        frame = new QFrame(Server);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 130, 231, 551));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 10, 211, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Yellowtail")});
        textBrowser->setFont(font1);
        listWidget = new QListWidget(frame);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 60, 211, 431));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 500, 211, 29));
        frame_2 = new QFrame(Server);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(260, 130, 331, 551));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        textEdit = new QTextEdit(frame_2);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 60, 311, 431));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 500, 311, 29));
        textBrowser_2 = new QTextBrowser(frame_2);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(10, 10, 311, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Viner Hand ITC")});
        textBrowser_2->setFont(font2);
        textBrowser_2->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        textBrowser_2->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        lcdNumber = new QLCDNumber(Server);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(520, 60, 71, 61));
        QFont font3;
        font3.setPointSize(20);
        lcdNumber->setFont(font3);
        lcdNumber->setFrameShape(QFrame::Shape::Panel);
        lcdNumber->setDigitCount(5);
        lcdNumber->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        label = new QLabel(Server);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 70, 121, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Limelight")});
        font4.setPointSize(10);
        label->setFont(font4);
        label_2 = new QLabel(Server);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 70, 71, 41));
        label_2->setFont(font4);

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QDialog *Server)
    {
        Server->setWindowTitle(QCoreApplication::translate("Server", "Kurakani server", nullptr));
        Loginlabel->setText(QCoreApplication::translate("Server", "Kurakani", nullptr));
        start->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("Server", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Yellowtail'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Clients  Lists</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Server", "Disconnect", nullptr));
        pushButton->setText(QCoreApplication::translate("Server", "Disconnect All", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("Server", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Viner Hand ITC'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Activity Log</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Server", "Total Clients:", nullptr));
        label_2->setText(QCoreApplication::translate("Server", "Server:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
