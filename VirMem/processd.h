#ifndef PROCESSD_H
#define PROCESSD_H
#include <QThread>
#include <QLabel>

#include "queue.h"



class ProcessD: public QThread
{
public:
    QLabel *processD = new QLabel();
    static ProcessD* getInstance();
    bool alreadyInUse = false;

    Queue<int> *queue = new Queue<int>();
    int prev = 0;

    int rep1 = 1;
    int rep2 = 1;
    int rep3 = 1;
    int rep4 = 1;
    int rep5 = 1;
    int rep6 = 1;

    int percent1 = 0;
    int percent2 = 0;
    int percent3 = 0;
    int percent4 = 0;
    int percent5 = 0;
    int percent6 = 0;

    int time1 = 500;
    int time2 = 300;
    int time3 = 1500;
    int time4 = 1000;
    int time5 = 800;
    int time6 = 1200;

    void run();
private:
    ProcessD();
    static ProcessD *instance;

};

#endif // PROCESSD_H
