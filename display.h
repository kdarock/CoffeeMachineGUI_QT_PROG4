#ifndef DISPLAY_H
#define DISPLAY_H
#include <QMainWindow>
class display{
public:
    void setLogString(QString log);
    void addLogString(QString log);
    void setCustomerString(QString display);
    void addCustomerString(QString display);
    QString getRealTime(void);
    QString getLogString(void);
    QString getCustomerString(void);
private:
    QString logString;
    QString customerString;
    QString currentTime;
};

#endif // DISPLAY_H
