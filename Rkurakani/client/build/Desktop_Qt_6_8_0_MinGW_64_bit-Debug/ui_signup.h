/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QFrame *KurakaniLogin;
    QLabel *Loginlabel;
    QTextBrowser *textBrowser;
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QFrame *frame;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QFrame *line;
    QLabel *label_8;
    QFrame *line_2;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLineEdit *Unewline;
    QLabel *label;
    QFormLayout *formLayout_7;
    QLabel *label_6;
    QLineEdit *Pnewline;
    QFormLayout *formLayout_8;
    QLabel *label_7;
    QLineEdit *Cnewline;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(500, 720);
        Signup->setMaximumSize(QSize(500, 720));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        Signup->setWindowIcon(icon);
        KurakaniLogin = new QFrame(Signup);
        KurakaniLogin->setObjectName("KurakaniLogin");
        KurakaniLogin->setEnabled(true);
        KurakaniLogin->setGeometry(QRect(170, 20, 191, 71));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(KurakaniLogin->sizePolicy().hasHeightForWidth());
        KurakaniLogin->setSizePolicy(sizePolicy);
        KurakaniLogin->setFrameShape(QFrame::Shape::StyledPanel);
        KurakaniLogin->setFrameShadow(QFrame::Shadow::Raised);
        Loginlabel = new QLabel(KurakaniLogin);
        Loginlabel->setObjectName("Loginlabel");
        Loginlabel->setGeometry(QRect(20, 20, 131, 31));
        sizePolicy.setHeightForWidth(Loginlabel->sizePolicy().hasHeightForWidth());
        Loginlabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font.setPointSize(18);
        font.setBold(false);
        font.setStrikeOut(false);
        Loginlabel->setFont(font);
        Loginlabel->setTextFormat(Qt::TextFormat::MarkdownText);
        Loginlabel->setIndent(1);
        textBrowser = new QTextBrowser(Signup);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 360, 451, 91));
        radioButton = new QRadioButton(Signup);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(40, 480, 381, 26));
        pushButton = new QPushButton(Signup);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 540, 281, 29));
        frame = new QFrame(Signup);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 650, 361, 41));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget_3 = new QWidget(Signup);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(110, 600, 251, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(layoutWidget_3);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_2->addWidget(line);

        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName("label_8");

        horizontalLayout_2->addWidget(label_8);

        line_2 = new QFrame(layoutWidget_3);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_2->addWidget(line_2);

        layoutWidget_4 = new QWidget(Signup);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(50, 630, 370, 87));
        horizontalLayout = new QHBoxLayout(layoutWidget_4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_4);
        label_9->setObjectName("label_9");

        horizontalLayout->addWidget(label_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget_4);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        layoutWidget = new QWidget(Signup);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 150, 391, 152));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setHorizontalSpacing(30);
        formLayout_2->setVerticalSpacing(50);
        Unewline = new QLineEdit(layoutWidget);
        Unewline->setObjectName("Unewline");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, Unewline);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);


        verticalLayout->addLayout(formLayout_2);

        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName("formLayout_7");
        formLayout_7->setHorizontalSpacing(30);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_6);

        Pnewline = new QLineEdit(layoutWidget);
        Pnewline->setObjectName("Pnewline");
        Pnewline->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, Pnewline);


        verticalLayout->addLayout(formLayout_7);

        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName("formLayout_8");
        formLayout_8->setHorizontalSpacing(30);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_7);

        Cnewline = new QLineEdit(layoutWidget);
        Cnewline->setObjectName("Cnewline");
        Cnewline->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout_8->setWidget(0, QFormLayout::FieldRole, Cnewline);


        verticalLayout->addLayout(formLayout_8);


        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Kurakani Sign up", nullptr));
        Loginlabel->setText(QCoreApplication::translate("Signup", "Kurakani", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Signup", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">User Agreement:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Only for Educational Purpose can't be used for Commercial Purpose.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-ri"
                        "ght:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; vertical-align:super;\">Created by: 	Sanjay Shrestha</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; vertical-align:super;\">	Shoviyat Chapagain</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; vertical-align:super;\">	Pratyush Silwal</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; vertic"
                        "al-align:super;\">	Sachin Gautam</span></p></body></html>", nullptr));
        radioButton->setText(QCoreApplication::translate("Signup", "By siging up ,You agree to our Terms and conditions. ", nullptr));
        pushButton->setText(QCoreApplication::translate("Signup", "Sign up", nullptr));
        label_8->setText(QCoreApplication::translate("Signup", "       OR", nullptr));
        label_9->setText(QCoreApplication::translate("Signup", "    Already have an account? ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Signup", "Log in", nullptr));
        label->setText(QCoreApplication::translate("Signup", "User ID :                ", nullptr));
        label_6->setText(QCoreApplication::translate("Signup", "Password:              ", nullptr));
        label_7->setText(QCoreApplication::translate("Signup", "Confirm Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
