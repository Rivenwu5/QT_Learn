/********************************************************************************
** Form generated from reading UI file 'testdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDIALOG_H
#define UI_TESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TestDialog
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *TestDialog)
    {
        if (TestDialog->objectName().isEmpty())
            TestDialog->setObjectName(QString::fromUtf8("TestDialog"));
        TestDialog->resize(400, 300);
        pushButton = new QPushButton(TestDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 80, 140, 40));

        retranslateUi(TestDialog);

        QMetaObject::connectSlotsByName(TestDialog);
    } // setupUi

    void retranslateUi(QDialog *TestDialog)
    {
        TestDialog->setWindowTitle(QApplication::translate("TestDialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("TestDialog", "Test Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestDialog: public Ui_TestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDIALOG_H
