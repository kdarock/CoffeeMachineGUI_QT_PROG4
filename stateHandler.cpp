#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::sStart_entered(void){
    QString logstring;
    QString displaystring;
    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "sStart: entered";
    displaystring="Starting Machine...";
    ui->CustomerScreen->appendPlainText(displaystring);
    ui->AdminLog->appendPlainText(logstring);
    emit internalEvent->customSignal();
}

void MainWindow::sStart_exited(void){
    QString logstring;
    QString displaystring;
    logstring = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    logstring += "sStart: exited, nextState=InitialisingHardware";
    displaystring="Starting Machine...";
}

void MainWindow::sInitialiseHardware_entered(void){

}

void MainWindow::sInitialiseHardware_exited(void){

}

void MainWindow::sIdle_entered(void){

}
void MainWindow::sIdle_exited(void){

}
void MainWindow::sChooseCoffee_entered(void){

}
void MainWindow::sChooseCoffee_exited(void){

}
void MainWindow::sAdminMode_entered(void){

}

void MainWindow::sAdminMode_exited(void){

}
void MainWindow::sCappuccino_entered(void){

}

void MainWindow::sCappuccino_exited(void){

}

void MainWindow::sAmericano_entered(void){

}
void MainWindow::sAmericano_exited(void){

}

void MainWindow::sLatte_entered(void){

}

void MainWindow::sLatte_exited(void){

}

void MainWindow::sConfirmation_entered(void){

}

void MainWindow::sConfirmation_exited(void){

}

void MainWindow::sWaitForMoney_entered(void){

}

void MainWindow::sWaitForMoney_exited(void){

}

void MainWindow::s50c_entered(void){

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
