/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *CustomerScreen;
    QPlainTextEdit *AdminLog;
    QPushButton *pbAdmin;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QPushButton *pbLatte;
    QPushButton *pbCappuccino;
    QPushButton *pbAmericano;
    QWidget *page_1;
    QPushButton *pbConfirm;
    QPushButton *pbCancel;
    QWidget *page_2;
    QPushButton *pb1e;
    QPushButton *pb50c;
    QPushButton *pb25c;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1009, 562);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        CustomerScreen = new QPlainTextEdit(centralwidget);
        CustomerScreen->setObjectName("CustomerScreen");
        CustomerScreen->setGeometry(QRect(30, 50, 481, 401));
        AdminLog = new QPlainTextEdit(centralwidget);
        AdminLog->setObjectName("AdminLog");
        AdminLog->setGeometry(QRect(530, 50, 451, 161));
        pbAdmin = new QPushButton(centralwidget);
        pbAdmin->setObjectName("pbAdmin");
        pbAdmin->setGeometry(QRect(30, 460, 121, 31));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(520, 220, 451, 281));
        page_0 = new QWidget();
        page_0->setObjectName("page_0");
        pbLatte = new QPushButton(page_0);
        pbLatte->setObjectName("pbLatte");
        pbLatte->setGeometry(QRect(10, 110, 121, 41));
        pbCappuccino = new QPushButton(page_0);
        pbCappuccino->setObjectName("pbCappuccino");
        pbCappuccino->setGeometry(QRect(160, 110, 121, 41));
        pbAmericano = new QPushButton(page_0);
        pbAmericano->setObjectName("pbAmericano");
        pbAmericano->setGeometry(QRect(300, 110, 131, 41));
        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        pbConfirm = new QPushButton(page_1);
        pbConfirm->setObjectName("pbConfirm");
        pbConfirm->setGeometry(QRect(50, 100, 131, 71));
        pbCancel = new QPushButton(page_1);
        pbCancel->setObjectName("pbCancel");
        pbCancel->setGeometry(QRect(280, 100, 131, 71));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pb1e = new QPushButton(page_2);
        pb1e->setObjectName("pb1e");
        pb1e->setGeometry(QRect(10, 100, 131, 41));
        pb50c = new QPushButton(page_2);
        pb50c->setObjectName("pb50c");
        pb50c->setGeometry(QRect(170, 100, 131, 41));
        pb25c = new QPushButton(page_2);
        pb25c->setObjectName("pb25c");
        pb25c->setGeometry(QRect(320, 100, 121, 41));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1009, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pbAdmin->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        pbLatte->setText(QCoreApplication::translate("MainWindow", "Latte", nullptr));
        pbCappuccino->setText(QCoreApplication::translate("MainWindow", "Cappuccino", nullptr));
        pbAmericano->setText(QCoreApplication::translate("MainWindow", "Americano", nullptr));
        pbConfirm->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        pbCancel->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        pb1e->setText(QCoreApplication::translate("MainWindow", "1 Euro", nullptr));
        pb50c->setText(QCoreApplication::translate("MainWindow", "50 cents", nullptr));
        pb25c->setText(QCoreApplication::translate("MainWindow", "25 cents", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
