#ifndef PROCESSA_H
#define PROCESSA_H

#include <QThread>
#include <QLabel>
#include "mainwindow.h"
#include "queue.h"

class ProcessA: public QThread
{
public:
    QLabel *processA = new QLabel();
    void run();
    static ProcessA *getInstance();
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

    int time1 = 1000;
    int time2 = 500;
    int time3 = 1200;
    int time4 = 800;
    int time5 = 1500;
    int time6 = 300;



private:
    ProcessA();
    static ProcessA *instance;

};

#endif // PROCESSA_H
