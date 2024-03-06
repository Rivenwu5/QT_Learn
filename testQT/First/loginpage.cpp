#include "loginpage.h"
#include "ui_loginpage.h"
#include <QMessageBox>

LoginPage::LoginPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_LogInBtn_clicked()
{
    if(ui->userLineEdit->text().trimmed() == tr("123") && ui->pwdLineEdit->text()==tr("123"))
    {
        QMessageBox::information(this, tr("结果"), tr("很棒，用户名和密码都正确"),QMessageBox::Ok);
        accept();
    }
    else//登录失败
    {
        QMessageBox::warning(this, tr("警告"), tr("用户名和密码错误"),QMessageBox::Yes);
        ui->pwdLineEdit->clear();
        ui->userLineEdit->clear();
        ui->userLineEdit->setFocus();

    }
}
