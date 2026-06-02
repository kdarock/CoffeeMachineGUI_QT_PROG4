#ifndef MONEYCOLLECTOR_H
#define MONEYCOLLECTOR_H

class moneyCollector{
public:
    moneyCollector();//constructor
    int getInsertedCredit();
    void setInsertedCredit(int amount);
    int getCoffeePrice();
    void setCoffeePrice(int latte, int cappuccino, int americano);
    void addInsertedCredit(int amount);
    bool checkCredit();
    void addChange(int amount);
    int getChange();
    void setChange(int amount);

private:
    int lattePrice;
    int cappuccinoPrice;
    int americanoPrice;
    int change;
    int insertedCredit;
    int priceSumCoffee;
};

#endif // MONEYCOLLECTOR_H
