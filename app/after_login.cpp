#include "after_login.h"
#include "old_versions_tab.h"
#include "ui_after_login.h"
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

After_login::After_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::After_login)
{
    ui->setupUi(this);
}

After_login::~After_login()
{
    delete ui;
}

void After_login::on_pushButton_clicked()
{
    QNetworkAccessManager *mgr = new QNetworkAccessManager(this);
    const QUrl url(QStringLiteral("http://192.168.0.59:45456/api/Auth/register"));
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
}


void After_login::on_pushButton_2_clicked()
{
    old_versions_tab old_ver;
    old_ver.setModal(true);
    old_ver.exec();


}

