/********************************************************************************
** Form generated from reading UI file 'fereastra_signup.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEREASTRA_SIGNUP_H
#define UI_FEREASTRA_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fereastra_SignUp
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *Fereastra_SignUp)
    {
        if (Fereastra_SignUp->objectName().isEmpty())
            Fereastra_SignUp->setObjectName(QString::fromUtf8("Fereastra_SignUp"));
        Fereastra_SignUp->resize(289, 229);
        groupBox = new QGroupBox(Fereastra_SignUp);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 271, 221));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 160, 101, 24));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 50, 175, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 80, 169, 26));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_3);

        widget2 = new QWidget(groupBox);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(30, 110, 163, 26));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_4 = new QLineEdit(widget2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_3->addWidget(lineEdit_4);


        retranslateUi(Fereastra_SignUp);

        QMetaObject::connectSlotsByName(Fereastra_SignUp);
    } // setupUi

    void retranslateUi(QDialog *Fereastra_SignUp)
    {
        Fereastra_SignUp->setWindowTitle(QCoreApplication::translate("Fereastra_SignUp", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Fereastra_SignUp", "Sign Up", nullptr));
        pushButton->setText(QCoreApplication::translate("Fereastra_SignUp", "Create Account", nullptr));
        label->setText(QCoreApplication::translate("Fereastra_SignUp", "Username: ", nullptr));
        label_2->setText(QCoreApplication::translate("Fereastra_SignUp", "Password:", nullptr));
        label_3->setText(QCoreApplication::translate("Fereastra_SignUp", "     Email:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fereastra_SignUp: public Ui_Fereastra_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEREASTRA_SIGNUP_H
