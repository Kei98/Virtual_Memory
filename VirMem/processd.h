#ifndef PROCESSD_H
#define PROCESSD_H
#include <QThread>


class ProcessD: public QThread
{
public:
    ProcessD();
    void run1();
protected:
    void run();
};

#endif // PROCESSD_H
