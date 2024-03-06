#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QMessageBox>
#include "loginpages.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //初始化页面的一些组件
    toLoginBtn = new QPushButton(this);
    toLoginBtn->move(70,80);
    toLoginBtn->setText(tr("去登录"));

    connect(toLoginBtn,&QPushButton::clicked,this,&MainWindow::toLogin);//建立信号和槽之间的关联
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::toLogin()
{
    LoginPages dlg;
    if(dlg.exec() == QDialog::Accepted)
    {
        QMessageBox::information(this, "信息", "登录成功！",QMessageBox::Yes );
//        dlg.close();
    }
}

