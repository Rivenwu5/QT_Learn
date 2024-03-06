/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *userLineEdit;
    QLineEdit *pwdLineEdit;
    QPushButton *LogInBtn;
    QPushButton *ExitBtn;

    void setupUi(QDialog *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        LoginPage->resize(612, 411);
        label = new QLabel(LoginPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 110, 81, 21));
        label_2 = new QLabel(LoginPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 160, 81, 21));
        userLineEdit = new QLineEdit(LoginPage);
        userLineEdit->setObjectName(QString::fromUtf8("userLineEdit"));
        userLineEdit->setGeometry(QRect(260, 110, 141, 31));
        pwdLineEdit = new QLineEdit(LoginPage);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(290, 160, 141, 31));
        LogInBtn = new QPushButton(LoginPage);
        LogInBtn->setObjectName(QString::fromUtf8("LogInBtn"));
        LogInBtn->setGeometry(QRect(179, 210, 101, 31));
        ExitBtn = new QPushButton(LoginPage);
        ExitBtn->setObjectName(QString::fromUtf8("ExitBtn"));
        ExitBtn->setGeometry(QRect(310, 210, 91, 31));

        retranslateUi(LoginPage);
        QObject::connect(ExitBtn, SIGNAL(clicked()), LoginPage, SLOT(close()));

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QDialog *LoginPage)
    {
        LoginPage->setWindowTitle(QApplication::translate("LoginPage", "Dialog", nullptr));
        label->setText(QApplication::translate("LoginPage", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("LoginPage", "\345\257\206\347\240\201\357\274\232", nullptr));
        LogInBtn->setText(QApplication::translate("LoginPage", "\347\231\273\345\275\225", nullptr));
        ExitBtn->setText(QApplication::translate("LoginPage", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
