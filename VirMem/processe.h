#ifndef PROCESSE_H
#define PROCESSE_H

#include <QThread>
#include <QLabel>


class ProcessE: public QThread
{
public:
    QLabel *processE = new QLabel();
    static ProcessE* getInstance();
    bool alreadyInUse = false;


    int percent1 = 0;
    int percent2 = 0;
    int percent3 = 0;
    int percent4 = 0;
    int percent5 = 0;
    int percent6 = 0;

    int time1 = 1500;
    int time2 = 800;
    int time3 = 300;
    int time4 = 1200;
    int time5 = 1000;
    int time6 = 500;

    void run();

private:
    ProcessE();
    static ProcessE *instance;
};

#endif // PROCESSE_H
