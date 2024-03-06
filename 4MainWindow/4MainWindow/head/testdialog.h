#ifndef TESTDIALOG_H
#define TESTDIALOG_H

#include <QDialog>
#include<QAction>

namespace Ui {
class TestDialog;
}

class TestDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TestDialog(QWidget *parent = nullptr);
    ~TestDialog();

private:
    Ui::TestDialog *ui;
private:
//    QAction* myAction;
};

#endif // TESTDIALOG_H
