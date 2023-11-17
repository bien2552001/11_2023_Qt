#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Button Exit
    connect(ui->btnexit,SIGNAL(clicked()),this,SLOT(close()));

    //Button Click
    connect(ui->btnpush,SIGNAL(clicked()),this,SLOT(displayText()));

}

void MainWindow::displayText()
{
    ui->lb1->setText("Xin chao a LAM ");
}

MainWindow::~MainWindow()
{
    delete ui;
}

