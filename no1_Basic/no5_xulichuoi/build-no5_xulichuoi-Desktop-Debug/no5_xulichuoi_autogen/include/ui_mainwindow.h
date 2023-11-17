/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lba;
    QLineEdit *lea;
    QLineEdit *leb;
    QPushButton *btn1;
    QLabel *lbkq;
    QLabel *lba_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(416, 333);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lba = new QLabel(centralwidget);
        lba->setObjectName(QString::fromUtf8("lba"));
        lba->setGeometry(QRect(50, 60, 71, 41));
        lba->setAlignment(Qt::AlignCenter);
        lea = new QLineEdit(centralwidget);
        lea->setObjectName(QString::fromUtf8("lea"));
        lea->setGeometry(QRect(130, 60, 141, 41));
        leb = new QLineEdit(centralwidget);
        leb->setObjectName(QString::fromUtf8("leb"));
        leb->setGeometry(QRect(130, 110, 141, 41));
        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(130, 170, 141, 41));
        lbkq = new QLabel(centralwidget);
        lbkq->setObjectName(QString::fromUtf8("lbkq"));
        lbkq->setGeometry(QRect(70, 230, 261, 51));
        lbkq->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lba_2 = new QLabel(centralwidget);
        lba_2->setObjectName(QString::fromUtf8("lba_2"));
        lba_2->setGeometry(QRect(50, 110, 71, 41));
        lba_2->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 416, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        lba->setText(QApplication::translate("MainWindow", "So a", nullptr));
        btn1->setText(QApplication::translate("MainWindow", "Tinh", nullptr));
        lbkq->setText(QString());
        lba_2->setText(QApplication::translate("MainWindow", "So b", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
