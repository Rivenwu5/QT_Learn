#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testdialog.h"
#include<QToolBar>
#include<QStatusBar>
#include<QMenu>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    goNewPage = new QPushButton(this);
    goNewPage->move(70,80);
    goNewPage->setText("go");
//    connect(LoginBtn,&QPushButton::clicked,this,&LoginPages::btnLogin);
    connect(goNewPage,&QPushButton::clicked,this,&MainWindow::go);

    QMenuBar* menu_bar = new QMenuBar(this);                    //创建一个菜单栏
    this->setMenuBar(menu_bar);


    //创建菜单
    QMenu *file_menu = new QMenu("文件(&F)",menu_bar);
    QMenu *edit_menu = new QMenu("编辑(&E)",menu_bar);
    QMenu *help_menu = new QMenu("帮助(&H)",menu_bar);

    //创建动作
    //相当于就是菜单的下拉内容
    QAction *new_action = new QAction("新建(&N)");
    QAction *open_action = new QAction("打开(&O)");
    QAction *save_action = new QAction("保存(&S)");

    QIcon icon1(":/pro_images/cup.png");
    QIcon icon2(":/pro_images/ice.png");
    QIcon icon3(":/pro_images/sanwish.png");

    new_action->setIcon(icon1);
    open_action->setIcon(icon2);
    save_action->setIcon(icon3);

    //添加动作到新建菜单，QAction就会自动变成子菜单
    file_menu->addAction(new_action);
    file_menu->addAction(open_action);
    file_menu->addSeparator(); //添加菜单分隔符
    file_menu->addAction(save_action);


    //把菜单添加进去菜单栏
    menu_bar->addMenu(file_menu);
    menu_bar->addMenu(edit_menu);
    menu_bar->addMenu(help_menu);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::go()
{
    TestDialog dlg;
    dlg.exec();
}
