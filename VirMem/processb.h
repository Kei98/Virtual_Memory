#ifndef PROCESSB_H
#define PROCESSB_H
#include <QThread>


class ProcessB: public QThread
{
public:
    ProcessB();
    void run1();
protected:
    void run();
};

#endif // PROCESSB_H
