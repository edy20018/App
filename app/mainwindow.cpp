#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "fereastra_signup.h"
#include "after_login.h"
#include <QMessageBox>
#include <QApplication>
#include <QCoreApplication>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QUrlQuery>
#include "fereastra_signup.h"
#include "ui_fereastra_signup.h"
#include <QMessageBox>
#include <iostream>
#include <QApplication>
#include <QCoreApplication>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QUrlQuery>
#include <QJsonDocument>
#include <QJsonObject>
#include <QTimer>
#include <QCoreApplication>
#include <iostream>
#include <QCoreApplication>
#include <QFile>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrl>
#include <QCommandLineParser>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::on_pushButton_clicked()
//{

//}


void MainWindow::on_pushButton_2_clicked()
{
    Fereastra_SignUp Sgn_but;
    Sgn_but.setModal(true);
    Sgn_but.exec();
}

QByteArray sendRequest(){

    // create custom temporary event loop on stack
    QEventLoop eventLoop;

    // "quit()" the event-loop, when the network request "finished()"
    QNetworkAccessManager mgr;
    QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));

    // the HTTP request
    QNetworkRequest req( QUrl( QString("https://192.168.0.59:45456/api/Auth/Login") ) );
    QNetworkReply *reply = mgr.get(req);
    eventLoop.exec(); // blocks stack until "finished()" has been called

    if (reply->error() == QNetworkReply::NoError) {
        //success
        //qDebug() << "Success" <<reply->readAll();
        return reply->readAll();
        delete reply;
    }
    else {
        //failure
        QByteArray a=0;
        return a;
        delete reply;
    }
}


void MainWindow::on_pushBut_login_clicked()
{
    QString username=ui->lineEdit_user->text();
    QString password=ui->lineEdit_pass->text();
   // QByteArray mesaj=sendRequest();

    QNetworkAccessManager *mgr = new QNetworkAccessManager(this);
       const QUrl url(QStringLiteral("http://192.168.0.59:45455/api/Auth/login"));
       QNetworkRequest request(url);
       request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

       QJsonObject obj;
       obj["username"] = username;
       obj["password"] = password;
       QJsonDocument doc(obj);
       QByteArray data = doc.toJson();
       // or
       // QByteArray data("{\"key1\":\"value1\",\"key2\":\"value2\"}");
       QNetworkReply *reply = mgr->post(request, data);

       QObject::connect(reply, &QNetworkReply::finished, [=](){
           if(reply->error() == QNetworkReply::NoError){
               QString contents = QString::fromUtf8(reply->readAll());
               //qDebug() << contents;
               QMessageBox::information(this,"Login","Connected.");
               hide();
                       after_login=new After_login(this);
                       after_login->show();
           }
           else{
               QString err = reply->errorString();
               //qDebug() << err;
               QMessageBox::information(this,"Login","Username or password doesn't exist.");
           }
           reply->deleteLater();
       });


}

//    if(username!="" && password!="")
//    {

//        if(mesaj!=(QByteArray)0)
//        {
//        QMessageBox::information(this,"Login",mesaj);
//        //ui->statusbar->showMessage("User and pass are corect",3000);
//        //_sleep(300);
//        //hide();
//        after_login=new After_login(this);
//        after_login->show();
//        }
//        else QMessageBox::information(this,"Login","Eroare");
//    }
//    else
//    {
//        QMessageBox::information(this,"Login","Username and password are incorrect");
//    }


