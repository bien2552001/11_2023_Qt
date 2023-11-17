#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSettings>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    LoadSetting();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SaveSetting()
{
    QSettings settings("MyName","MyApp");
    settings.beginGroup("SaveWidgetStatus");
    settings.setValue("CheckBoxState",ui->cb1->isChecked());
    settings.endGroup();
}



void MainWindow::LoadSetting()
{
    QSettings settings("MyName","MyApp");
    settings.beginGroup("SaveWidgetStatus");
    ui->cb1->setChecked(settings.value("CheckBoxState").toBool());
    settings.endGroup();

}

void MainWindow::closeEvent(QCloseEvent *event)
{
    SaveSetting();

}

