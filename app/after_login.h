#ifndef AFTER_LOGIN_H
#define AFTER_LOGIN_H

#include <QDialog>

namespace Ui {
class After_login;
}

class After_login : public QDialog
{
    Q_OBJECT

public:
    explicit After_login(QWidget *parent = nullptr);
    ~After_login();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::After_login *ui;
};

#endif // AFTER_LOGIN_H
