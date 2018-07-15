#include <QMessageBox>
#include "logicdialog.h"
#include "ui_logicdialog.h"

LogicDialog::LogicDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogicDialog)
{
    ui->setupUi(this);
}

LogicDialog::~LogicDialog()
{
    delete ui;
}

void LogicDialog::on_loginButton_clicked()
{
    // 判断用户名和密码是否正确，
        // 如果错误则弹出警告对话框
        if(ui->userLineEdit->text() == tr("yafeilinux") &&
               ui->pwdLineEdit->text() == tr("123456"))
        {
           accept();
        } else {
           QMessageBox::warning(this, tr("警告！"),
                       tr("用户名或密码错误！"),
                       QMessageBox::Yes);

           // 清空内容并定位光标
           ui->userLineEdit->clear();
           ui->pwdLineEdit->clear();
           ui->userLineEdit->setFocus();
        }
}
