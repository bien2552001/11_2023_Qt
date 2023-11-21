#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // Lấy danh sách các cổng COM hiện có
    qDebug() << "Available serial ports:";
    foreach (const QSerialPortInfo &portInfo, QSerialPortInfo::availablePorts()) {
        qDebug() << "Port Name:" << portInfo.portName();
        qDebug() << "Description:" << portInfo.description();
        qDebug() << "Manufacturer:" << portInfo.manufacturer();
        qDebug() << "===================================";
    }

//    // Chọn cổng COM cần kết nối
    selectedPortName = "/dev/ttyACM0"; // Thay đổi thành tên cổng COM thực tế trên hệ thống của bạn

    // Tạo một đối tượng QSerialPort
    COMPORT = new QSerialPort();

    // Đặt thông số cấu hình cho cổng COM
    COMPORT->setPortName(selectedPortName);
    COMPORT->setBaudRate(QSerialPort::Baud9600);
    COMPORT->setDataBits(QSerialPort::Data8);
    COMPORT->setParity(QSerialPort::NoParity);
    COMPORT->setStopBits(QSerialPort::OneStop);
    COMPORT->setFlowControl(QSerialPort::FlowControl::NoFlowControl);
    COMPORT->open(QIODevice::ReadWrite);

    //Check

    if(COMPORT->isOpen())
    {
        qDebug() << " Port Open ";
    }
    else
    {
        qDebug() << " Port is not connet";
        qDebug() << COMPORT->error();
    }
    connect(COMPORT,SIGNAL(readyRead()),this,SLOT(Read_Data()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnSend_clicked()
{
     if(COMPORT->isOpen())
     {
         COMPORT->write(ui->ln1->text().toLatin1() + char(10));
         COMPORT->flush();
     }
}

void MainWindow::Read_Data()
{
    if(COMPORT->isOpen())
    {
        while(COMPORT->bytesAvailable())
        {
            Data_From_serialPort += COMPORT->readAll();
            if(Data_From_serialPort.at(Data_From_serialPort.length()-1)== char(10))
            {
                IS_Data_Recevied = true;
            }
        }

        if(IS_Data_Recevied ==true)
        {
            qDebug() <<" Data form Serial Port :  " << Data_From_serialPort;
            ui->t1->append(Data_From_serialPort);
            Data_From_serialPort = "";
            IS_Data_Recevied = false;
        }
    }

}

