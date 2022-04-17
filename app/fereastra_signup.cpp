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


Fereastra_SignUp::Fereastra_SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fereastra_SignUp)
{
    ui->setupUi(this);
}

Fereastra_SignUp::~Fereastra_SignUp()
{
    delete ui;
}

QJsonObject ObjectFromString(const QString& in)
{
    QJsonValue val(in);
    return val.toObject();
}

void Fereastra_SignUp::on_pushButton_clicked()
{
    QString username=ui->lineEdit_2->text();
    QString password=ui->lineEdit_3->text();
    QString email=ui->lineEdit_3->text();



    QNetworkAccessManager *mgr = new QNetworkAccessManager(this);
    const QUrl url(QStringLiteral("http://192.168.0.59:45455/api/Auth/register"));
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
            qDebug() << contents;
        }
        else{
            QString err = reply->errorString();
            qDebug() << err;
        }
        reply->deleteLater();
    });

    QMessageBox::information(this,"Create Account","Cont creat");

}

