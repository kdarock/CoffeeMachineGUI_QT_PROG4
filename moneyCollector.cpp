#include "mainwindow.h"
#define PRICE_LATTE 400;
#define PRICE_CAPPUCCINO 225;
#define PRICE_AMERICANO 300;
moneyCollector::moneyCollector()
{
    lattePrice = PRICE_LATTE;
    cappuccinoPrice = PRICE_CAPPUCCINO;
    americanoPrice = PRICE_AMERICANO;
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
