#ifndef STATE_H
#define STATE_H

#include <QtStateMachine>
#include <vector>
#define STATE_AMOUNT 19
enum{sStart,
    sInitialiseHardware,
    sIdle,
    sChooseCoffee,
    sAdminMode,
    sRefill,
    sCappuccino,
    sAmericano,
    sLatte,
    sConfirmation,
    sWaitForMoney,
    s50c,
    s25c,
    s1e,
    sConfirmation2,
    sMakeCoffee,
    sRefund,
    sCancel,
    sGiveCoffee};

std::vector<QState*> states(STATE_AMOUNT,nullptr);
#endif // STATE_H
