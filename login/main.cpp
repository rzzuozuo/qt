#include <QMessageBox>
#include "mainwindow.h"
#include <QApplication>
#include "logicdialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    LogicDialog dlg;

    if (dlg.exec() == QDialog::Accepted)
        {
           w.show();
           return a.exec();
        }
        else return 0;
}
