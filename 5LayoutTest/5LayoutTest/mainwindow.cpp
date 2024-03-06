#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton>
#include<QLineEdit>
#include<QGridLayout>
#include<QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPushButton* btn = new QPushButton(this);
    QLineEdit* lineEdit = new QLineEdit(this);
    QTextEdit* textEdit = new QTextEdit(this);

    QGridLayout* gLayout = new QGridLayout;

    gLayout->addWidget(btn,0,0,1,1);//(要显示的组件，处于的行，列，所占据的行(高度)，占据列数)
    gLayout->addWidget(lineEdit,0,1,1,3);
    gLayout->addWidget(textEdit,1,0,2,4);

    ui->centralwidget->setLayout(gLayout);

}

MainWindow::~MainWindow()
{
    delete ui;
}

