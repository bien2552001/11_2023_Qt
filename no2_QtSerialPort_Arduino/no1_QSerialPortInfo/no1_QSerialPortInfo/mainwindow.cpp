#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
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


void MainWindow::on_SerialInfo_clicked()
{
    for(const QSerialPortInfo &portinfo : QSerialPortInfo::availablePorts())
    {
        qDebug() << "Port name: " << portinfo.portName();
        qDebug() << " Port Location : " << portinfo.systemLocation();
        qDebug() << " Port Description : " << portinfo.description();
        qDebug() << "Device manufacture : " << portinfo.manufacturer();
        qDebug() << "Device Serial Number : " <<portinfo.serialNumber();
        qDebug() << "Device Vendor Indentifier : " << portinfo.vendorIdentifier();
        qDebug() << "Device Product Indentifier : " << portinfo.productIdentifier();

        // Convert into hex Value
        qDebug() << "HEX__Device Vendor Indentifier : " << (portinfo.hasVendorIdentifier() ? QString::number(portinfo.vendorIdentifier(),16):0);
        qDebug() << "HEX__Device Product Indentifier : " << (portinfo.hasProductIdentifier() ? QString::number(portinfo.productIdentifier(),16):0) << "\n";

    }
}

