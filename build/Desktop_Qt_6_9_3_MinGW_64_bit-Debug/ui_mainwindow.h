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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
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
    QStackedWidget *stackedWidget;
    QWidget *page_Coffee;
    QPushButton *pbLatte;
    QPushButton *pbCappuccino;
    QPushButton *pbAmericano;
    QPushButton *pbAdminLogin;
    QWidget *page_giveCoffee;
    QPushButton *pbNextCustomer;
    QWidget *page_Confirmation;
    QPushButton *pbConfirm;
    QPushButton *pbCancel;
    QWidget *page_Money;
    QPushButton *pb1e;
    QPushButton *pb50c;
    QPushButton *pb25c;
    QPushButton *pb2e;
    QPushButton *pb1c;
    QWidget *page_Admin;
    QPushButton *pbRefill;
    QPushButton *pbLogout;
    QWidget *page_Confirmation2;
    QPushButton *pbRefund;
    QPushButton *pbConfirm2;
    QWidget *page_MakeCoffee;
    QProgressBar *progressBar;
    QLineEdit *InsertedCredit;
    QLineEdit *Change;
    QLineEdit *CoffeePrice;
    QMenuBar *menubar;
    QMenu *menuCoffee_Machine;
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
        CustomerScreen->setGeometry(QRect(540, 110, 441, 31));
        AdminLog = new QPlainTextEdit(centralwidget);
        AdminLog->setObjectName("AdminLog");
        AdminLog->setGeometry(QRect(50, 30, 451, 411));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(530, 220, 451, 261));
        page_Coffee = new QWidget();
        page_Coffee->setObjectName("page_Coffee");
        pbLatte = new QPushButton(page_Coffee);
        pbLatte->setObjectName("pbLatte");
        pbLatte->setGeometry(QRect(10, 110, 121, 41));
        pbCappuccino = new QPushButton(page_Coffee);
        pbCappuccino->setObjectName("pbCappuccino");
        pbCappuccino->setGeometry(QRect(160, 110, 121, 41));
        pbAmericano = new QPushButton(page_Coffee);
        pbAmericano->setObjectName("pbAmericano");
        pbAmericano->setGeometry(QRect(300, 110, 131, 41));
        pbAdminLogin = new QPushButton(page_Coffee);
        pbAdminLogin->setObjectName("pbAdminLogin");
        pbAdminLogin->setGeometry(QRect(10, 10, 81, 16));
        stackedWidget->addWidget(page_Coffee);
        page_giveCoffee = new QWidget();
        page_giveCoffee->setObjectName("page_giveCoffee");
        pbNextCustomer = new QPushButton(page_giveCoffee);
        pbNextCustomer->setObjectName("pbNextCustomer");
        pbNextCustomer->setGeometry(QRect(170, 80, 131, 81));
        stackedWidget->addWidget(page_giveCoffee);
        page_Confirmation = new QWidget();
        page_Confirmation->setObjectName("page_Confirmation");
        pbConfirm = new QPushButton(page_Confirmation);
        pbConfirm->setObjectName("pbConfirm");
        pbConfirm->setGeometry(QRect(50, 100, 131, 71));
        pbCancel = new QPushButton(page_Confirmation);
        pbCancel->setObjectName("pbCancel");
        pbCancel->setGeometry(QRect(280, 100, 131, 71));
        stackedWidget->addWidget(page_Confirmation);
        page_Money = new QWidget();
        page_Money->setObjectName("page_Money");
        pb1e = new QPushButton(page_Money);
        pb1e->setObjectName("pb1e");
        pb1e->setGeometry(QRect(10, 100, 131, 41));
        pb50c = new QPushButton(page_Money);
        pb50c->setObjectName("pb50c");
        pb50c->setGeometry(QRect(170, 100, 131, 41));
        pb25c = new QPushButton(page_Money);
        pb25c->setObjectName("pb25c");
        pb25c->setGeometry(QRect(320, 100, 121, 41));
        pb2e = new QPushButton(page_Money);
        pb2e->setObjectName("pb2e");
        pb2e->setGeometry(QRect(80, 170, 131, 41));
        pb1c = new QPushButton(page_Money);
        pb1c->setObjectName("pb1c");
        pb1c->setGeometry(QRect(260, 170, 121, 41));
        stackedWidget->addWidget(page_Money);
        page_Admin = new QWidget();
        page_Admin->setObjectName("page_Admin");
        pbRefill = new QPushButton(page_Admin);
        pbRefill->setObjectName("pbRefill");
        pbRefill->setGeometry(QRect(100, 80, 91, 41));
        pbLogout = new QPushButton(page_Admin);
        pbLogout->setObjectName("pbLogout");
        pbLogout->setGeometry(QRect(270, 80, 91, 41));
        stackedWidget->addWidget(page_Admin);
        page_Confirmation2 = new QWidget();
        page_Confirmation2->setObjectName("page_Confirmation2");
        pbRefund = new QPushButton(page_Confirmation2);
        pbRefund->setObjectName("pbRefund");
        pbRefund->setGeometry(QRect(210, 70, 80, 18));
        pbConfirm2 = new QPushButton(page_Confirmation2);
        pbConfirm2->setObjectName("pbConfirm2");
        pbConfirm2->setGeometry(QRect(90, 70, 80, 18));
        stackedWidget->addWidget(page_Confirmation2);
        page_MakeCoffee = new QWidget();
        page_MakeCoffee->setObjectName("page_MakeCoffee");
        progressBar = new QProgressBar(page_MakeCoffee);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(120, 110, 211, 21));
        progressBar->setValue(24);
        stackedWidget->addWidget(page_MakeCoffee);
        InsertedCredit = new QLineEdit(centralwidget);
        InsertedCredit->setObjectName("InsertedCredit");
        InsertedCredit->setGeometry(QRect(540, 150, 113, 24));
        Change = new QLineEdit(centralwidget);
        Change->setObjectName("Change");
        Change->setGeometry(QRect(810, 150, 113, 24));
        CoffeePrice = new QLineEdit(centralwidget);
        CoffeePrice->setObjectName("CoffeePrice");
        CoffeePrice->setGeometry(QRect(670, 150, 113, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1009, 17));
        menuCoffee_Machine = new QMenu(menubar);
        menuCoffee_Machine->setObjectName("menuCoffee_Machine");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCoffee_Machine->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pbLatte->setText(QCoreApplication::translate("MainWindow", "Latte", nullptr));
        pbCappuccino->setText(QCoreApplication::translate("MainWindow", "Cappuccino", nullptr));
        pbAmericano->setText(QCoreApplication::translate("MainWindow", "Americano", nullptr));
        pbAdminLogin->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        pbNextCustomer->setText(QCoreApplication::translate("MainWindow", "Next customer", nullptr));
        pbConfirm->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        pbCancel->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        pb1e->setText(QCoreApplication::translate("MainWindow", "1 Euro", nullptr));
        pb50c->setText(QCoreApplication::translate("MainWindow", "50 cents", nullptr));
        pb25c->setText(QCoreApplication::translate("MainWindow", "25 cents", nullptr));
        pb2e->setText(QCoreApplication::translate("MainWindow", "2 Euros", nullptr));
        pb1c->setText(QCoreApplication::translate("MainWindow", "1 cent", nullptr));
        pbRefill->setText(QCoreApplication::translate("MainWindow", "Refill", nullptr));
        pbLogout->setText(QCoreApplication::translate("MainWindow", "Log out", nullptr));
        pbRefund->setText(QCoreApplication::translate("MainWindow", "Refund", nullptr));
        pbConfirm2->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        InsertedCredit->setText(QString());
        menuCoffee_Machine->setTitle(QCoreApplication::translate("MainWindow", "Coffee Machine", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
