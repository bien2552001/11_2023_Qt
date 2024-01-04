#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
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



//    COMPORT->setFlowControl(QSerialPort::FlowControl::NoFlowControl);
//    COMPORT->open(QIODevice::ReadWrite);
//    if(COMPORT->isOpen())
//    {
//        qDebug() << " Port Open ";
//    }
//    else
//    {
//        qDebug() << " Port is not connet";
//        qDebug() << COMPORT->error();
//    }



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn1_clicked()
{
    // Mở cổng COM
    if (COMPORT->open(QIODevice::ReadWrite)) {
        qDebug() << "Serial port opened successfully.";

        // Gửi dữ liệu
        QByteArray dataToSend = "Hello, Serial Port!";
        qint64 bytesWritten = COMPORT->write(dataToSend);

        if (bytesWritten == -1) {
            qDebug() << "Failed to write to serial port.";
        } else {
            qDebug() << "Data written to serial port:" << dataToSend;
        }

        // Đóng cổng COM
        COMPORT->close();
        qDebug() << "Serial port closed." << "\n";
    } else {
        qDebug() << "Failed to open serial port." <<"\n";
    }
}

