#include "head/testdialog.h"
#include "ui_testdialog.h"

#include <QMenuBar>
#include <QMenu>
#include <QToolBar>
#include <QStatusBar>


TestDialog::TestDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("Test Dialog");
    QMenuBar* menu_bar = new QMenuBar(this);
//    this->setMenuBar(menu_bar);

}

TestDialog::~TestDialog()
{
    delete ui;
}
