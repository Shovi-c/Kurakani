/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Loginwindow
{
public:
    QPushButton *LoginOk;
    QFrame *KurakaniLogin;
    QLabel *Loginlabel;
    QFrame *frame;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLabel *UserLabel;
    QLabel *PasswordLabel;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Userline;
    QLineEdit *PLine;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *Sup;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *line;
    QLabel *label_2;
    QFrame *line_2;

    void setupUi(QDialog *Loginwindow)
    {
        if (Loginwindow->objectName().isEmpty())
            Loginwindow->setObjectName("Loginwindow");
        Loginwindow->resize(450, 550);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Loginwindow->sizePolicy().hasHeightForWidth());
        Loginwindow->setSizePolicy(sizePolicy);
        Loginwindow->setMaximumSize(QSize(450, 550));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        Loginwindow->setWindowIcon(icon);
        Loginwindow->setAutoFillBackground(false);
        LoginOk = new QPushButton(Loginwindow);
        LoginOk->setObjectName("LoginOk");
        LoginOk->setGeometry(QRect(100, 300, 251, 29));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LoginOk->sizePolicy().hasHeightForWidth());
        LoginOk->setSizePolicy(sizePolicy1);
        KurakaniLogin = new QFrame(Loginwindow);
        KurakaniLogin->setObjectName("KurakaniLogin");
        KurakaniLogin->setEnabled(true);
        KurakaniLogin->setGeometry(QRect(100, 40, 261, 81));
        sizePolicy1.setHeightForWidth(KurakaniLogin->sizePolicy().hasHeightForWidth());
        KurakaniLogin->setSizePolicy(sizePolicy1);
        KurakaniLogin->setFrameShape(QFrame::Shape::StyledPanel);
        KurakaniLogin->setFrameShadow(QFrame::Shadow::Raised);
        Loginlabel = new QLabel(KurakaniLogin);
        Loginlabel->setObjectName("Loginlabel");
        Loginlabel->setGeometry(QRect(40, 20, 181, 41));
        sizePolicy1.setHeightForWidth(Loginlabel->sizePolicy().hasHeightForWidth());
        Loginlabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font.setPointSize(24);
        font.setBold(false);
        font.setStrikeOut(false);
        Loginlabel->setFont(font);
        Loginlabel->setTextFormat(Qt::TextFormat::MarkdownText);
        Loginlabel->setIndent(1);
        frame = new QFrame(Loginwindow);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 460, 361, 41));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget = new QWidget(Loginwindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 170, 351, 90));
        sizePolicy1.setHeightForWidth(layoutWidget->sizePolicy().hasHeightForWidth());
        layoutWidget->setSizePolicy(sizePolicy1);
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(24);
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName("verticalLayout");
        UserLabel = new QLabel(layoutWidget);
        UserLabel->setObjectName("UserLabel");
        sizePolicy1.setHeightForWidth(UserLabel->sizePolicy().hasHeightForWidth());
        UserLabel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(UserLabel);

        PasswordLabel = new QLabel(layoutWidget);
        PasswordLabel->setObjectName("PasswordLabel");
        sizePolicy1.setHeightForWidth(PasswordLabel->sizePolicy().hasHeightForWidth());
        PasswordLabel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(PasswordLabel);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName("verticalLayout_2");
        Userline = new QLineEdit(layoutWidget);
        Userline->setObjectName("Userline");
        sizePolicy1.setHeightForWidth(Userline->sizePolicy().hasHeightForWidth());
        Userline->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(Userline);

        PLine = new QLineEdit(layoutWidget);
        PLine->setObjectName("PLine");
        sizePolicy1.setHeightForWidth(PLine->sizePolicy().hasHeightForWidth());
        PLine->setSizePolicy(sizePolicy1);
        PLine->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_2->addWidget(PLine);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_2);

        layoutWidget1 = new QWidget(Loginwindow);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 440, 370, 87));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Sup = new QPushButton(layoutWidget1);
        Sup->setObjectName("Sup");

        horizontalLayout->addWidget(Sup);

        layoutWidget2 = new QWidget(Loginwindow);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(100, 390, 251, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(layoutWidget2);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_2->addWidget(line);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        line_2 = new QFrame(layoutWidget2);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_2->addWidget(line_2);


        retranslateUi(Loginwindow);

        QMetaObject::connectSlotsByName(Loginwindow);
    } // setupUi

    void retranslateUi(QDialog *Loginwindow)
    {
        Loginwindow->setWindowTitle(QCoreApplication::translate("Loginwindow", " Kurakani Log in", nullptr));
        LoginOk->setText(QCoreApplication::translate("Loginwindow", "Login ", nullptr));
        Loginlabel->setText(QCoreApplication::translate("Loginwindow", "Kurakani", nullptr));
        UserLabel->setText(QCoreApplication::translate("Loginwindow", "User :", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("Loginwindow", "Password:", nullptr));
        label->setText(QCoreApplication::translate("Loginwindow", "     Don't have an account?  ", nullptr));
        Sup->setText(QCoreApplication::translate("Loginwindow", "Sign up", nullptr));
        label_2->setText(QCoreApplication::translate("Loginwindow", "       OR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loginwindow: public Ui_Loginwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
