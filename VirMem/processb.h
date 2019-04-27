#ifndef PROCESSB_H
#define PROCESSB_H
#include <QThread>
#include <QLabel>


class ProcessB: public QThread
{
public:
    QLabel *processB = new QLabel();
    static ProcessB* getInstance();
    bool alreadyInUse = false;

    int percent1 = 0;
    int percent2 = 0;
    int percent3 = 0;
    int percent4 = 0;
    int percent5 = 0;
    int percent6 = 0;

    int time1 = 800;
    int time2 = 1200;
    int time3 = 1000;
    int time4 = 500;
    int time5 = 300;
    int time6 = 1500;

    void run();

private:
    ProcessB();
    static ProcessB *instance;
};

#endif // PROCESSB_H
