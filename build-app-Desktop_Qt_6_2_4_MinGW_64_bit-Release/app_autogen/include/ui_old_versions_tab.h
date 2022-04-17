/********************************************************************************
** Form generated from reading UI file 'old_versions_tab.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OLD_VERSIONS_TAB_H
#define UI_OLD_VERSIONS_TAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_old_versions_tab
{
public:

    void setupUi(QDialog *old_versions_tab)
    {
        if (old_versions_tab->objectName().isEmpty())
            old_versions_tab->setObjectName(QString::fromUtf8("old_versions_tab"));
        old_versions_tab->resize(400, 300);

        retranslateUi(old_versions_tab);

        QMetaObject::connectSlotsByName(old_versions_tab);
    } // setupUi

    void retranslateUi(QDialog *old_versions_tab)
    {
        old_versions_tab->setWindowTitle(QCoreApplication::translate("old_versions_tab", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class old_versions_tab: public Ui_old_versions_tab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OLD_VERSIONS_TAB_H
