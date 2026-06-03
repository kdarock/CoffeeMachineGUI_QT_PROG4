#include "mainwindow.h"
#define PRICE_LATTE_INIT 400;
#define PRICE_CAPPUCCINO_INIT 225;
#define PRICE_AMERICANO_INIT 300;
moneyCollector::moneyCollector()
{
    lattePrice = PRICE_LATTE_INIT;
    cappuccinoPrice = PRICE_CAPPUCCINO_INIT;
    americanoPrice = PRICE_AMERICANO_INIT;
    insertedCredit = 0;
    changeAvailable = 0;
}

void moneyCollector::setCoffeePrice(int latte,int cappuccino, int americano){
    lattePrice = latte;
    cappuccinoPrice = cappuccino;
    americanoPrice = americano;
}

int moneyCollector::getLattePrice(void){
    return lattePrice;
}

int moneyCollector::getCappuccinoPrice(void){
    return cappuccinoPrice;
}

int moneyCollector::getAmericanoPrice(void){
    return americanoPrice;
}


void moneyCollector::setChange(int amount){
    changeAvailable = amount;
}

int moneyCollector::getChange(void)
{
    return changeAvailable;
}

void moneyCollector::addChange(int amount)
{
    changeAvailable += amount;
}

void moneyCollector::addInsertedCredit(int amount){
    insertedCredit += amount;
}

void moneyCollector::setInsertedCredit(int amount){
    insertedCredit = amount;
}

int moneyCollector::getInsertedCredit(void){
    return insertedCredit;
}

bool moneyCollector::checkCredit(int priceSum){
    if(insertedCredit >= priceSum){
        return true;
    }
    return false;
}
