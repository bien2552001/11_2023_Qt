#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
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

// Button Info
void MainWindow::on_btnInfo_clicked()
{
    QMessageBox::information(this,"Infomaion","Thong bao abc,...");
}

//Button Question
void MainWindow::on_btnQuestion_clicked()
{
    QMessageBox::question(this,"Question","Dat cau hoi ");
}


void MainWindow::on_btnWarning_clicked()
{
    QMessageBox::warning(this,"Warning","Canh bao 123");
}


void MainWindow::on_btnCritical_clicked()
{
    QMessageBox::critical(this,"Critical","Binh luan abcd");
}

