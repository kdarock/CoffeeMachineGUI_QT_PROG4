#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtStateMachine/QStateMachine>
#include <QDateTime>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class CustomObject: public QObject{ //class inherrited from QObject class
    Q_OBJECT
public:
    CustomObject(QObject *parent = nullptr) : QObject(parent) {}

signals:
    void customSignal();
    void customEnough();
    void customNotEnough();
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //class to process money
    CustomObject *internalEvent= new CustomObject;
private slots:
    void sStart_entered(void);
    void sInitialiseHardware_entered(void);
    void sIdle_entered(void);
    void sChooseCoffee_entered(void);
    void sAdminMode_entered(void);
    void sCappuccino_entered(void);
    void sAmericano_entered(void);
    void sLatte_entered(void);
    void sConfirmation_entered(void);
    void sWaitForMoney_entered(void);
    void s50c_entered(void);
    void s25c_entered(void);
    void s1e_entered(void);
    void sConfirmation2_entered(void);
    void sMakeCoffee_entered(void);
    void sRefund_entered(void);
    void sCancel_entered(void);
    void sGiveCoffee_entered(void);

    void sStart_exited(void);
    void sInitialiseHardware_exited(void);
    void sIdle_exited(void);
    void sChooseCoffee_exited(void);
    void sAdminMode_exited(void);
    void sCappuccino_exited(void);
    void sAmericano_exited(void);
    void sLatte_exited(void);
    void sConfirmation_exited(void);
    void sWaitForMoney_exited(void);
    void s50c_exited(void);
    void s25c_exited(void);
    void s1e_exited(void);
    void sConfirmation2_exited(void);
    void sMakeCoffee_exited(void);
    void sRefund_exited(void);
    void sCancel_exited(void);
    void sGiveCoffee_exited(void);


private:
    Ui::MainWindow *ui;
    QStateMachine statemachine;
};
#endif // MAINWINDOW_H
