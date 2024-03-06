#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginpage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    LoginPage loginPage ;
    loginPage.exec();
//    if(loginPage.exec() == QDialog::Accepted)
//    {

//    }
}
