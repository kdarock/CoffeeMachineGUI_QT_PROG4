#include "mainwindow.h"
#include "ui_mainwindow.h"
void display::setLogString(QString log){
    logString = log;
}

void display::addLogString(QString log){
    logString += log;
}

void display::setCustomerString(QString display){
    customerString = display;
}

void display::addCustomerString(QString display){
    customerString+=display;
}

QString display::getLogString(void){
    return logString;
}

QString display::getCustomerString(void){
    return customerString;
}

QString display::getRealTime(void){
    QString time;
    time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    return time;
}
