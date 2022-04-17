/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_pass;
    QPushButton *pushBut_login;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(375, 351);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 381, 331));
        groupBox->setMouseTracking(false);
        groupBox->setTabletTracking(false);
        groupBox->setAutoFillBackground(false);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 120, 61, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 160, 61, 21));
        label_2->setAutoFillBackground(true);
        lineEdit_user = new QLineEdit(groupBox);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(130, 120, 113, 24));
        lineEdit_user->setAutoFillBackground(true);
        lineEdit_pass = new QLineEdit(groupBox);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setGeometry(QRect(130, 160, 113, 24));
        lineEdit_pass->setAutoFillBackground(true);
        lineEdit_pass->setEchoMode(QLineEdit::Password);
        pushBut_login = new QPushButton(groupBox);
        pushBut_login->setObjectName(QString::fromUtf8("pushBut_login"));
        pushBut_login->setGeometry(QRect(150, 200, 80, 24));
        pushBut_login->setAutoFillBackground(true);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 240, 80, 24));
        pushButton_2->setAutoFillBackground(true);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 40, 141, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 375, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        pushBut_login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; text-decoration: underline;\">JEET Team app</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
