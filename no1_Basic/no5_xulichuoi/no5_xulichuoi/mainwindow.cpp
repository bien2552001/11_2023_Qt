#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    // Khai bao 1 chuoi va them tieu de cho windown
//    QString str1 = " Hello World ";
//    this->setWindowTitle(str1);
//    QString str2 = QString(3,'X');

//    //Kich thuoc chuoi
//    int l = str1.length();
//    qDebug()<<str1;
//    qDebug()<<str2 ;
//    //Kich thuoc chuoi
//    qDebug()<<str2.size();
//    qDebug()<<l;


//    // Kiem tre 1 chuoi
//    QString str3;
//    qDebug()<<"Chuoi hien tai dang rong :  " << str3.isEmpty();




}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn1_clicked()
{
    double a,b,kq;
    // Chuyen doi chuoi nhap vao sang kieu so
    a = ui->lea->text().toDouble();
    b = ui->leb->text().toDouble();
    kq = a + b;

    // Hien thi ket qua va chuyen doi tu so sang chuoi
    ui->lbkq->setText(QString("Tong la : %1 ").arg(kq));
}

