#include "old_versions_tab.h"
#include "ui_old_versions_tab.h"

old_versions_tab::old_versions_tab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::old_versions_tab)
{
    ui->setupUi(this);
}

old_versions_tab::~old_versions_tab()
{
    delete ui;
}
