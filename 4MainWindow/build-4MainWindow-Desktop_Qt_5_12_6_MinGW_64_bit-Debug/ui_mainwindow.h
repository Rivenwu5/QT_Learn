/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action2;
    QAction *action2_p;
    QAction *action1_1_y;
    QAction *action1_2_s;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_N;
    QMenu *menu1_G;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        action2 = new QAction(MainWindow);
        action2->setObjectName(QString::fromUtf8("action2"));
        action2_p = new QAction(MainWindow);
        action2_p->setObjectName(QString::fromUtf8("action2_p"));
        action1_1_y = new QAction(MainWindow);
        action1_1_y->setObjectName(QString::fromUtf8("action1_1_y"));
        action1_2_s = new QAction(MainWindow);
        action1_2_s->setObjectName(QString::fromUtf8("action1_2_s"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 19));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_N = new QMenu(menu_F);
        menu_N->setObjectName(QString::fromUtf8("menu_N"));
        menu1_G = new QMenu(menu_N);
        menu1_G->setObjectName(QString::fromUtf8("menu1_G"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_F->menuAction());
        menu_F->addAction(menu_N->menuAction());
        menu_F->addAction(action2);
        menu_N->addAction(menu1_G->menuAction());
        menu_N->addAction(action2_p);
        menu1_G->addAction(action1_1_y);
        menu1_G->addAction(action1_2_s);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action2->setText(QApplication::translate("MainWindow", "2->3", nullptr));
#ifndef QT_NO_SHORTCUT
        action2->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_NO_SHORTCUT
        action2_p->setText(QApplication::translate("MainWindow", "2(&p)", nullptr));
        action1_1_y->setText(QApplication::translate("MainWindow", "1-1(&y)", nullptr));
        action1_2_s->setText(QApplication::translate("MainWindow", "1-2(&s)", nullptr));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&K)", nullptr));
        menu_N->setTitle(QApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
        menu1_G->setTitle(QApplication::translate("MainWindow", "1(&G)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
