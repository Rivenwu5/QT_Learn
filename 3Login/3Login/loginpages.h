#ifndef LOGINPAGES_H
#define LOGINPAGES_H

#include<QDialog>

class QPushButton;
class QLabel;
class QLineEdit;

class LoginPages : public QDialog
{
    Q_OBJECT
public:
    explicit LoginPages(QWidget *parent = 0);
    ~LoginPages();

private:
    QPushButton* LoginBtn;
    QPushButton* ExitBtn;
    QLabel* UserNameLabel;
    QLabel* PwdLabel;
    QLineEdit* usernameEdit;
    QLineEdit* pwdEdit;

private slots:
    void btnExit();
    void btnLogin();

};

#endif // LOGINPAGES_H
