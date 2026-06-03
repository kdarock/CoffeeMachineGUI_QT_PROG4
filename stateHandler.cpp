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
    ui->stackedWidget->setCurrentWidget(ui->page_Coffee);
    changeGive=0;
    c.setInsertedCredit(0);
    ui->InsertedCredit->setText(QString::number(c.getInsertedCredit()));
    ui->Change->setText(QString::number(changeGive));
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
    ui->AdminLog->appendPlainText(d.getLogString());
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
    priceSumCoffee=c.getCappuccinoPrice();
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
    priceSumCoffee=c.getAmericanoPrice();
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
    priceSumCoffee=c.getLattePrice();
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
     /*Signal: wait for push button to be pushed (pbConfirm and pbCancel)*/

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
    /*Signal: wait for push buttons to be pushed (pb1e,pb50c,pb25c)*/
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
    processMoney(50);
}

void MainWindow::s50c_exited(void){
    d.setLogString(d.getRealTime());
    d.addLogString("s50c: exited");
    ui->AdminLog->appendPlainText(d.getCustomerString());

}

void MainWindow::s25c_entered(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("s25c: entered");
    d.setCustomerString("You inserted: 25 cents");
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    ui->AdminLog->appendPlainText(d.getLogString());
    /*Process money*/
    processMoney(25);
}

void MainWindow::s25c_exited(void){
    d.setLogString(d.getRealTime());
    d.addLogString("s25c: exited");
    ui->AdminLog->appendPlainText(d.getCustomerString());
}

void MainWindow::s1e_entered(void){
    /*logging and display string*/
    d.setLogString(d.getRealTime());
    d.addLogString("s1e: entered");
    d.setCustomerString("You inserted: 1 euro");
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    ui->AdminLog->appendPlainText(d.getLogString());
    processMoney(100);
}

void MainWindow::s1e_exited(void){
    d.setLogString(d.getRealTime());
    d.addLogString("s25c: exited");
    ui->AdminLog->appendPlainText(d.getCustomerString());
}

void MainWindow::sConfirmation2_entered(void){
    d.setLogString(d.getRealTime());
    d.addLogString("sConfirmation2: entered");
    d.setCustomerString("Do you wish to proceed?");
    ui->AdminLog->appendPlainText(d.getLogString());
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    /*signal: wait for push buttons (pbRefund, pbConfirm2)
     logic: change the stacked widget to page_Confirmation2*/
    ui->stackedWidget->setCurrentWidget(ui->page_Confirmation2);
}

void MainWindow::sConfirmation2_exited(void){
    d.setLogString(d.getRealTime());
    d.addLogString("sConfirmation2: exited");
    ui->AdminLog->appendPlainText(d.getLogString());
}

void MainWindow::sMakeCoffee_entered(void){
    d.setLogString(d.getRealTime());
    d.addLogString("sMakeCoffee: entered");
    d.setCustomerString("Your coffee is being made");
    ui->AdminLog->appendPlainText(d.getLogString());
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    /*add progress bar widget*/
    ui->stackedWidget->setCurrentWidget(ui->page_MakeCoffee);
    if(chosenCoffee==Latte){
        d.setCustomerString("Your Latte is being made");
        ui->CustomerScreen->appendPlainText(d.getCustomerString());
        startMakingCoffee(1000);
    }
    else if(chosenCoffee==Cappuccino){
        d.setCustomerString("Your Cappuccino is being made");
        ui->CustomerScreen->appendPlainText(d.getCustomerString());
        startMakingCoffee(300);
    }
    else{
        d.setCustomerString("Your Americano is being made");
        ui->CustomerScreen->appendPlainText(d.getCustomerString());
        startMakingCoffee(450);
    }
    emit internalEvent->customSignal();
}

void MainWindow::sMakeCoffee_exited(void){
    d.setLogString(d.getRealTime());
    d.addLogString("sMakeCoffee: exited");
    ui->AdminLog->appendPlainText(d.getLogString());
}

void MainWindow::sRefund_entered(void){

    d.setLogString(d.getRealTime());
    d.addLogString("sRefund: entered");
    d.setCustomerString("Refunded");
    ui->AdminLog->appendPlainText(d.getLogString());
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    /*logic: Set the inserted Credit to 0*/
    c.setInsertedCredit(0);
    changeGive-=changeGive;
    ui->Change->setText(QString::number(changeGive));
    ui->InsertedCredit->setText(QString::number(c.getInsertedCredit()));
    emit internalEvent->customSignal();
}

void MainWindow::sRefund_exited(void){
    d.setLogString(d.getRealTime());
    d.addLogString("sRefund: exited");
    ui->AdminLog->appendPlainText(d.getLogString());
}

void MainWindow::sCancel_entered(void){
    d.setLogString(d.getRealTime());
    d.addLogString("sCancel: entered");
    d.setCustomerString("Cancelling order...");
    ui->AdminLog->appendPlainText(d.getLogString());
    ui->CustomerScreen->appendPlainText(d.getCustomerString());
    emit internalEvent->customSignal();
}

void MainWindow::sCancel_exited(void){
    d.setLogString(d.getRealTime());
    d.addLogString("sCancel: exited");
     ui->AdminLog->appendPlainText(d.getLogString());
}

void MainWindow::sGiveCoffee_entered(void){
    d.setLogString(d.getRealTime());
    d.addLogString("sGiveCoffee: entered");
    d.setCustomerString("Please grab your coffee and change");
    ui->AdminLog->appendPlainText(d.getLogString());
    ui->CustomerScreen->appendPlainText(d.getCustomerString());

    ui->stackedWidget->setCurrentWidget(ui->page_giveCoffee);


}

void MainWindow::sGiveCoffee_exited(void){
    d.setLogString(d.getRealTime());
    d.addLogString("sGiveCoffee: entered");
    ui->AdminLog->appendPlainText(d.getLogString());
}

void MainWindow::processMoney(int money){
    c.addInsertedCredit(money);
    ui->InsertedCredit->setText(QString::number(c.getInsertedCredit()));
    if(c.checkCredit(priceSumCoffee)){
        changeGive=c.getInsertedCredit() - priceSumCoffee;
        ui->AdminLog->appendPlainText("signal: customEnough()");
        ui->CustomerScreen->appendPlainText("Enough Money Inserted");
        ui->Change->setText(QString::number(changeGive));
        emit internalEvent->customEnough();
    }
    else
    {
        ui->AdminLog->appendPlainText("signal: customNotEnough()");
        ui->CustomerScreen->appendPlainText("Not enough money");
        emit internalEvent->customNotEnough();
    }
}

void MainWindow::startMakingCoffee(int duration){
    m_progress = 0;
    ui->progressBar->setValue(0);

    int steps    = 100;
    int interval = duration / steps;

    m_timer = new QTimer(this);

    connect(m_timer, &QTimer::timeout, this, [=]()
    {
        m_progress++;
        ui->progressBar->setValue(m_progress);

        if (m_progress >= 100)
        {
            m_timer->stop();
        }
    });
    m_timer->start(interval);
}



