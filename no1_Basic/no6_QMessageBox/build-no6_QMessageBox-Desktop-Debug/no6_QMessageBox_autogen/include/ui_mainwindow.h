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
    QPushButton *btnInfo;
    QPushButton *btnCritical;
    QPushButton *btnWarning;
    QPushButton *btnQuestion;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnInfo = new QPushButton(centralwidget);
        btnInfo->setObjectName(QString::fromUtf8("btnInfo"));
        btnInfo->setGeometry(QRect(180, 70, 211, 61));
        btnCritical = new QPushButton(centralwidget);
        btnCritical->setObjectName(QString::fromUtf8("btnCritical"));
        btnCritical->setGeometry(QRect(180, 320, 211, 61));
        btnWarning = new QPushButton(centralwidget);
        btnWarning->setObjectName(QString::fromUtf8("btnWarning"));
        btnWarning->setGeometry(QRect(180, 240, 211, 61));
        btnQuestion = new QPushButton(centralwidget);
        btnQuestion->setObjectName(QString::fromUtf8("btnQuestion"));
        btnQuestion->setGeometry(QRect(180, 160, 211, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 19));
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
        btnInfo->setText(QApplication::translate("MainWindow", "Info", nullptr));
        btnCritical->setText(QApplication::translate("MainWindow", "Critical", nullptr));
        btnWarning->setText(QApplication::translate("MainWindow", "Warning", nullptr));
        btnQuestion->setText(QApplication::translate("MainWindow", "Question", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
