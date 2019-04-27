#ifndef PROCESSD_H
#define PROCESSD_H
#include <QThread>
#include <QLabel>



class ProcessD: public QThread
{
public:
    QLabel *processD = new QLabel();
    static ProcessD* getInstance();
    bool alreadyInUse = false;

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
