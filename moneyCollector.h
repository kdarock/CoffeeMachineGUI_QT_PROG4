#ifndef MONEYCOLLECTOR_H
#define MONEYCOLLECTOR_H

class moneyCollector{
public:
    moneyCollector();//constructor
    int getInsertedCredit();
    void setInsertedCredit(int amount);
    int getCoffeePrice();
    void setCoffeePrice(int latte, int cappuccino, int americano);
    int getLattePrice(void);
    int getCappuccinoPrice(void);
    int getAmericanoPrice(void);
    void addInsertedCredit(int amount);
    bool checkCredit(int priceSum);

private:
    int lattePrice;
    int cappuccinoPrice;
    int americanoPrice;
    int changeAvailable;
    int insertedCredit;
};

#endif // MONEYCOLLECTOR_H
