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
    change = 0;
}

void moneyCollector::setCoffeePrice(int latte,int cappuccino, int americano){
    lattePrice = latte;
    cappuccinoPrice = cappuccino;
    americanoPrice = americano;
}

void moneyCollector::setChange(int amount){
    change = amount;
}

int moneyCollector::getChange(void)
{
    return change;
}

void moneyCollector::addChange(int amount)
{
    change += amount;
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

bool moneyCollector::checkCredit(void){
    if(insertedCredit >= priceSumCoffee){
        return true;
    }
    return false;
}
