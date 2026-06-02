#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "display.h"

void MainWindow::sStart_entered(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sStart: entered");
    d.setCustomerString("Starting machine");
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    ui->AdminLog->appendPlainText(d.getLogString());
    emit internalEvent->customSignal();
}

void MainWindow::sStart_exited(void){
    d.setLogString(d.getRealTime());
    d.addLogString("sStart: exited");
    ui->AdminLog->appendPlainText(d.getLogString());
}

void MainWindow::sInitialiseHardware_entered(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sInitialiseHardware: entered");
    d.setCustomerString("Initialising Hardware");
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    ui->AdminLog->appendPlainText(d.getLogString());
    emit internalEvent->customSignal();
}

void MainWindow::sInitialiseHardware_exited(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sInitialiseHardware: exited");
    ui->AdminLog->appendPlainText(d.getLogString());
}

void MainWindow::sIdle_entered(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sIdle: entered");
    d.setCustomerString("Machine Idling");
    ui->AdminLog->appendPlainText(d.getLogString());
    emit internalEvent->customSignal();

}
void MainWindow::sIdle_exited(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sIdle: exited");
    d.setCustomerString("Starting machine");
    ui->AdminLog->appendPlainText(d.getLogString());
}
void MainWindow::sChooseCoffee_entered(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sChooseCoffee: entered");
    d.setCustomerString("Choose your coffee");
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    ui->AdminLog->appendPlainText(d.getLogString());
    /*external event*/
}
void MainWindow::sChooseCoffee_exited(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sChooseCoffee: exited");
    ui->AdminLog->appendPlainText(d.getLogString());


}
void MainWindow::sAdminMode_entered(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sAdminMode: entered");
    d.setCustomerString("ADMIN MODE");
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    ui->AdminLog->appendPlainText(d.getLogString());
    /*logic*/
    ui->stackedWidget->setCurrentWidget(ui->page_Admin);
}

void MainWindow::sAdminMode_exited(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sAdminMode: exited");
    d.addCustomerString("ADMIN LOGGED OUT");
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    ui->AdminLog->appendPlainText(d.getLogString());
    //restore to the state the were left off
}
void MainWindow::sCappuccino_entered(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sCappucinno: entered");
    d.setCustomerString("Cappuccino: 2.25 euros");
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    ui->AdminLog->appendPlainText(d.getLogString());
    /*logic*/
    chosenCoffee=Cappuccino;
    emit internalEvent->customSignal();
}

void MainWindow::sCappuccino_exited(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sCappuccino: exited");
    ui->AdminLog->appendPlainText(d.getLogString());
    //do nothing
}

void MainWindow::sAmericano_entered(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sAmericano: entered");
    d.setCustomerString("Americano: 3 euros");
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    ui->AdminLog->appendPlainText(d.getLogString());
    /*logic*/
    chosenCoffee=Americano;
    emit internalEvent->customSignal();
}
void MainWindow::sAmericano_exited(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sAmericano: exited");
    ui->AdminLog->appendPlainText(d.getLogString());
    //do nothing
}

void MainWindow::sLatte_entered(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sLatte: entered");
    d.setCustomerString("Latte: 4 euros");
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    ui->AdminLog->appendPlainText(d.getLogString());
    /*logic*/
    chosenCoffee=Latte;
    emit internalEvent->customSignal();
}

void MainWindow::sLatte_exited(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sLatte: exited");
    ui->AdminLog->appendPlainText(d.getLogString());
    //do nothing
}

void MainWindow::sConfirmation_entered(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sConfirmation: entered");
    ui->AdminLog->appendPlainText(d.getLogString());
    /*logic*/
     ui->stackedWidget->setCurrentWidget(ui->page_Confirmation);

}

void MainWindow::sConfirmation_exited(void){
    d.setLogString(d.getRealTime());
    d.addLogString("sConfirmation: exited");
    ui->AdminLog->appendPlainText(d.getLogString());
}

void MainWindow::sWaitForMoney_entered(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sWaitForMoney: entered");
    d.setCustomerString("Please Insert Money");
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    ui->AdminLog->appendPlainText(d.getLogString());
    /*logic*/
    ui->stackedWidget->setCurrentWidget(ui->page_Money);
}

void MainWindow::sWaitForMoney_exited(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("sWaitForMoney: exited");
    ui->AdminLog->appendPlainText(d.getLogString());
}

void MainWindow::s50c_entered(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("s50c: entered");
    d.setCustomerString("You inserted: 50 cents");
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    ui->AdminLog->appendPlainText(d.getLogString());
    ProcessMoney(50);
}

void MainWindow::s50c_exited(void){

}

void MainWindow::s25c_entered(void){

}

void MainWindow::s25c_exited(void){

}

void MainWindow::s1e_entered(void){

}

void MainWindow::s1e_exited(void){

}

void MainWindow::sConfirmation2_entered(void){

}

void MainWindow::sConfirmation2_exited(void){

}

void MainWindow::sMakeCoffee_entered(void){

}

void MainWindow::sMakeCoffee_exited(void){

}

void MainWindow::sRefund_entered(void){

}

void MainWindow::sRefund_exited(void){

}

void MainWindow::sCancel_entered(void){

}

void MainWindow::sCancel_exited(void){

}

void MainWindow::sGiveCoffee_entered(void){

}

void MainWindow::sGiveCoffee_exited(void){

}

void MainWindow::ProcessMoney(int money){
    c.addInsertedCredit(money);
    ui->InsertedCredit->insert(QString::number(c.getInsertedCredit()));
    if(c.checkCredit()){
        ui->CustomerScreen->appendPlainText("Enough Money Inserted");
        emit internalEvent->customEnough();
    }
    else
    {
        ui->CustomerScreen->appendPlainText("Not enough money");
        emit internalEvent->customNotEnough();
    }
}
