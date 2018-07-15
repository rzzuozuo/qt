#ifndef LOGICDIALOG_H
#define LOGICDIALOG_H

#include <QDialog>

namespace Ui {
class LogicDialog;
}

class LogicDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LogicDialog(QWidget *parent = 0);
    ~LogicDialog();

private slots:
    void on_loginButton_clicked();

private:
    Ui::LogicDialog *ui;
};

#endif // LOGICDIALOG_H
