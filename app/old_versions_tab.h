#ifndef OLD_VERSIONS_TAB_H
#define OLD_VERSIONS_TAB_H

#include <QDialog>

namespace Ui {
class old_versions_tab;
}

class old_versions_tab : public QDialog
{
    Q_OBJECT

public:
    explicit old_versions_tab(QWidget *parent = nullptr);
    ~old_versions_tab();

private:
    Ui::old_versions_tab *ui;
};

#endif // OLD_VERSIONS_TAB_H
