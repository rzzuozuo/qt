/********************************************************************************
** Form generated from reading UI file 'logicdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGICDIALOG_H
#define UI_LOGICDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LogicDialog
{
public:
    QLabel *label;
    QLineEdit *userLineEdit;
    QLabel *label_2;
    QLineEdit *pwdLineEdit;
    QPushButton *loginButton;
    QPushButton *exitButton;

    void setupUi(QDialog *LogicDialog)
    {
        if (LogicDialog->objectName().isEmpty())
            LogicDialog->setObjectName(QStringLiteral("LogicDialog"));
        LogicDialog->resize(400, 300);
        label = new QLabel(LogicDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 90, 54, 12));
        userLineEdit = new QLineEdit(LogicDialog);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setGeometry(QRect(130, 90, 113, 20));
        label_2 = new QLabel(LogicDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 120, 54, 12));
        pwdLineEdit = new QLineEdit(LogicDialog);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(130, 120, 113, 20));
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        loginButton = new QPushButton(LogicDialog);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(70, 220, 75, 23));
        exitButton = new QPushButton(LogicDialog);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(230, 220, 75, 23));

        retranslateUi(LogicDialog);
        QObject::connect(exitButton, SIGNAL(clicked()), LogicDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(LogicDialog);
    } // setupUi

    void retranslateUi(QDialog *LogicDialog)
    {
        LogicDialog->setWindowTitle(QApplication::translate("LogicDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("LogicDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        userLineEdit->setPlaceholderText(QApplication::translate("LogicDialog", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("LogicDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pwdLineEdit->setPlaceholderText(QApplication::translate("LogicDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        loginButton->setText(QApplication::translate("LogicDialog", "\347\231\273\351\231\206", Q_NULLPTR));
        exitButton->setText(QApplication::translate("LogicDialog", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogicDialog: public Ui_LogicDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGICDIALOG_H
