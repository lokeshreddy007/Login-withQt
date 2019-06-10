// imports
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QMessageBox>

// functions logic
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("Qt");
    db.setUserName("root");
    db.setPassword("");
    if(db.open()){
        qDebug() << "Connected!";
    }else{
        qDebug() << "Failed to Connect";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

// button clicked function
void MainWindow::on_submit_clicked()
{
    QString username = ui->userName->text();
    QString passowrd = ui->userPassword->text();
    qDebug() << username << passowrd;
    QString command = "Select  * from user where name = '" + username + "' and mail= '"+ passowrd + "'";

    //    Select * from user where name = "lokesh" and mail = "lokesh123"
    QString commandcheck = "select name from user";
    qDebug () << command;
    qDebug () << commandcheck;
    QSqlQuery query(db);
    if(query.exec(command)){
        if(query.size() >0){
            QMessageBox::information(this,"Login Success.","You");
        }else{
            QMessageBox::information(this,"Login Failed","pls check");
        }
    }
}

// planning Add new function
