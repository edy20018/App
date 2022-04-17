/********************************************************************************
** Form generated from reading UI file 'after_login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFTER_LOGIN_H
#define UI_AFTER_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_After_login
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *After_login)
    {
        if (After_login->objectName().isEmpty())
            After_login->setObjectName(QString::fromUtf8("After_login"));
        After_login->resize(547, 367);
        groupBox = new QGroupBox(After_login);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 20, 531, 351));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 120, 181, 51));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 190, 181, 51));

        retranslateUi(After_login);

        QMetaObject::connectSlotsByName(After_login);
    } // setupUi

    void retranslateUi(QDialog *After_login)
    {
        After_login->setWindowTitle(QCoreApplication::translate("After_login", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("After_login", "File to upload.", nullptr));
        pushButton->setText(QCoreApplication::translate("After_login", "Check for updates", nullptr));
        pushButton_2->setText(QCoreApplication::translate("After_login", "Old versions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class After_login: public Ui_After_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFTER_LOGIN_H
