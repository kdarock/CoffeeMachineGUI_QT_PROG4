#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "state.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*init file logging*/
    logFile.open("logging.txt");
    logFile.close();
    //start page:
    ui->stackedWidget->setCurrentWidget(ui->page_Coffee);
    //declaring state and adding state to the statemachine:
    QState_dec();
    for(QState* state:states){
        stateAdd(state);
    }
    stateTransition();
    connectState();
    statemachine.setInitialState(states[sStart]);
    statemachine.start();

};

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::stateAdd(QState* state){

    statemachine.addState(state);
}

void MainWindow::QState_dec(void){
    states[sStart] = new QState();
    states[sInitialiseHardware]= new QState();
    states[sIdle]= new QState();
    states[sChooseCoffee] = new QState();
    states[sAdminMode]= new QState();
    states[sRefill]= new QState();
    states[sCappuccino]= new QState();
    states[sAmericano]= new QState();
    states[sLatte]= new QState();
    states[sConfirmation]= new QState();
    states[sWaitForMoney] = new QState();
    states[s2e] = new QState();
    states[s1c] = new QState();
    states[s50c] = new QState();
    states[s25c] = new QState();
    states[s1e] = new QState();
    states[sConfirmation2]= new QState();
    states[sMakeCoffee] = new QState();
    states[sRefund] = new QState();
    states[sCancel]= new QState();
    states[sGiveCoffee]= new QState();

}

void MainWindow::stateTransition(void){
    states[sStart]->addTransition(internalEvent, SIGNAL(customSignal()), states[sInitialiseHardware]);

    states[sInitialiseHardware]->addTransition(internalEvent, SIGNAL(customSignal()), states[sIdle]);

    states[sIdle]->addTransition(internalEvent, SIGNAL(customSignal()), states[sChooseCoffee]);

    states[sChooseCoffee]->addTransition(ui->pbLatte,      &QPushButton::clicked, states[sLatte]);
    states[sChooseCoffee]->addTransition(ui->pbCappuccino, &QPushButton::clicked, states[sCappuccino]);
    states[sChooseCoffee]->addTransition(ui->pbAmericano,  &QPushButton::clicked, states[sAmericano]);
    states[sChooseCoffee]->addTransition(ui->pbAdminLogin, &QPushButton::clicked, states[sAdminMode]);

    states[sLatte]->addTransition(internalEvent,      SIGNAL(customSignal()), states[sConfirmation]);
    states[sCappuccino]->addTransition(internalEvent, SIGNAL(customSignal()), states[sConfirmation]);
    states[sAmericano]->addTransition(internalEvent,  SIGNAL(customSignal()), states[sConfirmation]);

    states[sConfirmation]->addTransition(ui->pbConfirm, &QPushButton::clicked, states[sWaitForMoney]);
    states[sConfirmation]->addTransition(ui->pbCancel,  &QPushButton::clicked, states[sIdle]);

    states[sConfirmation2]->addTransition(ui->pbRefund,    &QPushButton::clicked, states[sRefund]);
    states[sConfirmation2]->addTransition(ui->pbConfirm2,  &QPushButton::clicked, states[sMakeCoffee]);

    states[sRefund]->addTransition(internalEvent, SIGNAL(customSignal()), states[sIdle]);

    states[sWaitForMoney]->addTransition(ui->pb1e,  &QPushButton::clicked, states[s1e]);
    states[sWaitForMoney]->addTransition(ui->pb25c, &QPushButton::clicked, states[s25c]);
    states[sWaitForMoney]->addTransition(ui->pb50c, &QPushButton::clicked, states[s50c]);
    states[sWaitForMoney]->addTransition(ui->pb2e, &QPushButton::clicked, states[s2e]);
    states[sWaitForMoney]->addTransition(ui->pb1c, &QPushButton::clicked, states[s1c]);

    for (auto coinState : {s1e, s25c, s50c, s2e, s1c}) {
        states[coinState]->addTransition(internalEvent, SIGNAL(customNotEnough()),states[sWaitForMoney]);
        states[coinState]->addTransition(internalEvent, SIGNAL(customEnough()), states[sConfirmation2]);
    }

    states[sAdminMode]->addTransition(ui->pbLogout, &QPushButton::clicked, states[sIdle]);
    states[sAdminMode]->addTransition(ui->pbRefill,&QPushButton::clicked,states[sRefill]);
    states[sRefill]->addTransition(internalEvent,SIGNAL(customSignal()),states[sAdminMode]);

    states[sMakeCoffee]->addTransition(internalEvent, SIGNAL(customSignal()), states[sGiveCoffee]);
    states[sGiveCoffee]->addTransition(ui->pbNextCustomer, &QPushButton::clicked, states[sIdle]);
}

void MainWindow::connectState(void){
     connect(states[sStart], &QState::entered,this, &MainWindow::sStart_entered);
    connect(states[sStart],&QState::exited,this,&MainWindow::sStart_exited);
    connect(states[sInitialiseHardware],&QState::entered,this,&MainWindow::sInitialiseHardware_entered);
    connect(states[sInitialiseHardware],&QState::exited,this,&MainWindow::sInitialiseHardware_exited);
    connect(states[sIdle],&QState::entered,this,&MainWindow::sIdle_entered);
    connect(states[sIdle],&QState::exited,this,&MainWindow::sIdle_exited);
    connect(states[sChooseCoffee],&QState::entered,this,&MainWindow::sChooseCoffee_entered);
    connect(states[sChooseCoffee],&QState::exited,this,&MainWindow::sChooseCoffee_exited);
    connect(states[sAdminMode],&QState::entered,this,&MainWindow::sAdminMode_entered);
    connect(states[sAdminMode],&QState::exited,this,&MainWindow::sAdminMode_exited);
    connect(states[sCappuccino],&QState::entered,this,&MainWindow::sCappuccino_entered);
    connect(states[sCappuccino],&QState::exited,this,&MainWindow::sCappuccino_exited);
    connect(states[sAmericano],&QState::entered,this,&MainWindow::sAmericano_entered);
    connect(states[sAmericano],&QState::exited,this,&MainWindow::sAmericano_exited);
    connect(states[sLatte], &QState::entered, this, &MainWindow::sLatte_entered);
    connect(states[sLatte], &QState::exited, this, &MainWindow::sLatte_exited);
    connect(states[sConfirmation], &QState::entered, this, &MainWindow::sConfirmation_entered);
    connect(states[sConfirmation], &QState::exited, this, &MainWindow::sConfirmation_exited);
    connect(states[sWaitForMoney], &QState::entered, this, &MainWindow::sWaitForMoney_entered);
    connect(states[sWaitForMoney], &QState::exited, this, &MainWindow::sWaitForMoney_exited);
    connect(states[s2e], &QState::entered, this, &MainWindow::s2e_entered);
    connect(states[s2e], &QState::exited, this, &MainWindow::s2e_exited);
    connect(states[s1c], &QState::entered, this, &MainWindow::s1c_entered);
    connect(states[s1c], &QState::exited, this, &MainWindow::s1c_exited);
    connect(states[s50c], &QState::entered, this, &MainWindow::s50c_entered);
    connect(states[s50c], &QState::exited, this, &MainWindow::s50c_exited);
    connect(states[s25c], &QState::entered, this, &MainWindow::s25c_entered);
    connect(states[s25c], &QState::exited, this, &MainWindow::s25c_exited);
    connect(states[s1e], &QState::entered, this, &MainWindow::s1e_entered);
    connect(states[s1e], &QState::exited, this, &MainWindow::s1e_exited);
    connect(states[sConfirmation2], &QState::entered, this, &MainWindow::sConfirmation2_entered);
    connect(states[sConfirmation2], &QState::exited, this, &MainWindow::sConfirmation2_exited);
    connect(states[sMakeCoffee], &QState::entered, this, &MainWindow::sMakeCoffee_entered);
    connect(states[sMakeCoffee], &QState::exited, this, &MainWindow::sMakeCoffee_exited);
    connect(states[sRefund], &QState::entered, this, &MainWindow::sRefund_entered);
    connect(states[sRefund], &QState::exited, this, &MainWindow::sRefund_exited);
    connect(states[sCancel], &QState::entered, this, &MainWindow::sCancel_entered);
    connect(states[sCancel], &QState::exited, this, &MainWindow::sCancel_exited);
    connect(states[sGiveCoffee], &QState::entered, this, &MainWindow::sGiveCoffee_entered);
    connect(states[sGiveCoffee], &QState::exited, this, &MainWindow::sGiveCoffee_exited);
    connect(states[sRefill], &QState::entered,this,&MainWindow::sRefill_entered);
    connect(states[sRefill], &QState::exited,this,&MainWindow::sRefill_exited);

}
