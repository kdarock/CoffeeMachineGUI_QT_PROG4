#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //start up page:
    ui->stackedWidget->setCurrentWidget(ui->page_Coffee);

    //declaring state:
    QState *sStart = new QState();
    QState *sInitialiseHardware= new QState();
    QState *sIdle= new QState();
    QState *sChooseCoffee= new QState();
    QState *sAdminMode= new QState();
    QState *sCappuccino= new QState();
    QState *sAmericano= new QState();
    QState *sLatte= new QState();
    QState *sConfirmation= new QState();
    QState *sWaitForMoney = new QState();
    QState *s50c = new QState();
    QState *s25c = new QState();
    QState  *s1e = new QState();
    QState *sConfirmation2= new QState();
    QState *sMakeCoffee = new QState();
    QState *sRefund = new QState();
    QState *sCancel= new QState();
    QState *sGiveCoffee= new QState();

    //adding state to the statemachine:
    statemachine.addState(sStart);
    statemachine.addState(sInitialiseHardware);
    statemachine.addState(sIdle);
    statemachine.addState(sChooseCoffee);
    statemachine.addState(sAdminMode);
    statemachine.addState(sCappuccino);
    statemachine.addState(sAmericano);
    statemachine.addState(sLatte);
    statemachine.addState(sConfirmation);
    statemachine.addState(sWaitForMoney);
    statemachine.addState(s50c);
    statemachine.addState(s25c);
    statemachine.addState(s1e);
    statemachine.addState(sConfirmation2);
    statemachine.addState(sMakeCoffee);
    statemachine.addState(sCancel);
    statemachine.addState(sRefund);
    statemachine.addState(sGiveCoffee);

    //Set the starting point of the statemachine
    statemachine.setInitialState(sStart);

    //Transition from one state to another:
    sStart->addTransition(internalEvent,SIGNAL(customSignal()),sInitialiseHardware);
    sInitialiseHardware->addTransition(internalEvent,SIGNAL(customSignal()),sIdle);
    sIdle->addTransition(ui->pbAdminLogin,&QPushButton::clicked,sAdminMode);
    sIdle->addTransition(internalEvent,SIGNAL(customSignal()),sChooseCoffee);

    sChooseCoffee->addTransition(ui->pbLatte,&QPushButton::clicked,sLatte);
    sChooseCoffee->addTransition(ui->pbCappuccino,&QPushButton::clicked,sCappuccino);
    sChooseCoffee->addTransition(ui->pbAmericano,&QPushButton::clicked,sAmericano);
    sLatte->addTransition(internalEvent,SIGNAL(customSignal()),sConfirmation);
    sCappuccino->addTransition(internalEvent,SIGNAL(customSignal()),sConfirmation);
    sAmericano->addTransition(internalEvent,SIGNAL(customSignal()),sConfirmation);
    sConfirmation->addTransition(ui->pbConfirm,&QPushButton::clicked,sWaitForMoney);
    sConfirmation->addTransition(ui->pbCancel,&QPushButton::clicked,sCancel);


    /* TO-DO LIST:
     * need to add state transition
     * implement functions in stateHandler file.
     * implement file system.
     */


    sWaitForMoney->addTransition(ui->pb1e,&QPushButton::clicked,s1e);
    sWaitForMoney->addTransition(ui->pb25c,&QPushButton::clicked,s25c);
    sWaitForMoney->addTransition(ui->pb50c,&QPushButton::clicked,s50c);
    s25c->addTransition(internalEvent,SIGNAL(customNotEnough()),sWaitForMoney);
    s50c->addTransition(internalEvent,SIGNAL(customNotEnough()),sWaitForMoney);
    s1e->addTransition(internalEvent,SIGNAL(customNotEnough()),sWaitForMoney);




    connect(ui->pbAdminLogin,&QPushButton::clicked,this,&MainWindow::sAdminMode_entered); //make the admin state accessible from any state.


    connect(sStart, &QState::entered,this, &MainWindow::sStart_entered);
    connect(sStart,&QState::exited,this,&MainWindow::sStart_exited);
    connect(sInitialiseHardware,&QState::entered,this,&MainWindow::sInitialiseHardware_entered);
    //connect(,&QState::entered,this,);
    //connect(,&QState::exited,this,);
    connect(sIdle,&QState::entered,this,&MainWindow::sIdle_entered);
    connect(sIdle,&QState::exited,this,&MainWindow::sIdle_exited);
    connect(sChooseCoffee,&QState::entered,this,&MainWindow::sChooseCoffee_entered);
    connect(sChooseCoffee,&QState::exited,this,&MainWindow::sChooseCoffee_exited);
    connect(sAdminMode,&QState::entered,this,&MainWindow::sAdminMode_entered);
    connect(sAdminMode,&QState::entered,this,&MainWindow::sAdminMode_exited);
    connect(sCappuccino,&QState::entered,this,&MainWindow::sCappuccino_entered);
    connect(sCappuccino,&QState::exited,this,&MainWindow::sCappuccino_exited);
    connect(sAmericano,&QState::entered,this,&MainWindow::sAmericano_entered);
    connect(sAmericano,&QState::exited,this,&MainWindow::sAmericano_exited);
    connect(sLatte, &QState::entered, this, &MainWindow::sLatte_entered);
    connect(sLatte, &QState::exited, this, &MainWindow::sLatte_exited);
    connect(sConfirmation, &QState::entered, this, &MainWindow::sConfirmation_entered);
    connect(sConfirmation, &QState::exited, this, &MainWindow::sConfirmation_exited);
    connect(sWaitForMoney, &QState::entered, this, &MainWindow::sWaitForMoney_entered);
    connect(sWaitForMoney, &QState::exited, this, &MainWindow::sWaitForMoney_exited);
    connect(s50c, &QState::entered, this, &MainWindow::s50c_entered);
    connect(s50c, &QState::exited, this, &MainWindow::s50c_exited);
    connect(s25c, &QState::entered, this, &MainWindow::s25c_entered);
    connect(s25c, &QState::exited, this, &MainWindow::s25c_exited);
    connect(s1e, &QState::entered, this, &MainWindow::s1e_entered);
    connect(s1e, &QState::exited, this, &MainWindow::s1e_exited);
    connect(sConfirmation2, &QState::entered, this, &MainWindow::sConfirmation2_entered);
    connect(sConfirmation2, &QState::exited, this, &MainWindow::sConfirmation2_exited);
    connect(sMakeCoffee, &QState::entered, this, &MainWindow::sMakeCoffee_entered);
    connect(sMakeCoffee, &QState::exited, this, &MainWindow::sMakeCoffee_exited);
    connect(sRefund, &QState::entered, this, &MainWindow::sRefund_entered);
    connect(sRefund, &QState::exited, this, &MainWindow::sRefund_exited);
    connect(sCancel, &QState::entered, this, &MainWindow::sCancel_entered);
    connect(sCancel, &QState::exited, this, &MainWindow::sCancel_exited);
    connect(sGiveCoffee, &QState::entered, this, &MainWindow::sGiveCoffee_entered);
    connect(sGiveCoffee, &QState::exited, this, &MainWindow::sGiveCoffee_exited);



    statemachine.start();

};

MainWindow::~MainWindow()
{
    delete ui;
}



