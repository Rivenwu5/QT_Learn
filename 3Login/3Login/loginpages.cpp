
#include "loginpages.h"

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>


LoginPages::LoginPages(QWidget *parent):QDialog(parent)
{
    //初始化一些组件，放在构造函数中
    //    QPushButton* LoginBtn;
    //    QPushButton* ExitBtn;
    //    QLabel* UserNameLabel;
    //    QLabel* PwdLabel;
    //    QLineEdit* usernameEdit;
//        QLineEdit* pwdEdit;

        UserNameLabel = new QLabel(this);
        UserNameLabel->move(70, 80);
        UserNameLabel->setText("用户名：");

        PwdLabel = new QLabel(this);
        PwdLabel->move(70,130);
        PwdLabel->setText("密码：");

        usernameEdit = new QLineEdit(this);
        usernameEdit->move(150, 80);
        usernameEdit->setPlaceholderText(tr("input username"));

        pwdEdit = new QLineEdit(this);
        pwdEdit->move(150, 130);
        pwdEdit->setPlaceholderText(tr("input pwd"));

        LoginBtn = new QPushButton(this);
        LoginBtn->move(50, 200);
        LoginBtn->setText("登录");

        ExitBtn = new QPushButton(this);
        ExitBtn->move(210, 200);
        ExitBtn->setText("退出");

        connect(ExitBtn,&QPushButton::clicked,this,&LoginPages::btnExit);
        connect(LoginBtn,&QPushButton::clicked,this,&LoginPages::btnLogin);
}

LoginPages::~LoginPages()
{

}
void LoginPages::btnLogin()
{
//    QMessageBox::information(this, "信息", "你点击了登录按钮",QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(usernameEdit->text().trimmed() == tr("123") && pwdEdit->text().trimmed() == tr("123"))
    {
        accept();//将当前的窗口隐藏（这样就做到子窗口功能消失这个功能），并且发送accepted信号，也就是设置结果代码为Accepted
    }
    else
    {
        QMessageBox::information(this, "信息", "输入错误",QMessageBox::Yes );
        usernameEdit->clear();
        pwdEdit->clear();
        usernameEdit->setFocus();

    }
}
void LoginPages::btnExit()
{
//    QMessageBox::information(this, "信息", "你点击了退出按钮",QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    this->close();
}
