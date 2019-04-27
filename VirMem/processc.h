#ifndef PROCESSC_H
#define PROCESSC_H
#include <QThread>
#include <QLabel>

#include "queue.h"


class ProcessC:public QThread
{
public:
    QLabel *processC = new QLabel();
    static ProcessC* getInstance();
    bool alreadyInUse = false;

    Queue<int> *queue = new Queue<int>();
    int prev;


    int percent1 = 0;
    int percent2 = 0;
    int percent3 = 0;
    int percent4 = 0;
    int percent5 = 0;
    int percent6 = 0;

    int time1 = 300;
    int time2 = 1000;
    int time3 = 500;
    int time4 = 1500;
    int time5 = 1200;
    int time6 = 800;

    void run();

private:
    ProcessC();
    static ProcessC *instance;
};

#endif // PROCESSC_H
