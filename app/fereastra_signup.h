#ifndef FEREASTRA_SIGNUP_H
#define FEREASTRA_SIGNUP_H

#include <QDialog>

namespace Ui {
class Fereastra_SignUp;
}

class Fereastra_SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit Fereastra_SignUp(QWidget *parent = nullptr);
    ~Fereastra_SignUp();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Fereastra_SignUp *ui;
};

#endif // FEREASTRA_SIGNUP_H
