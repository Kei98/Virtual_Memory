#ifndef PROCESSC_H
#define PROCESSC_H
#include <QThread>

class ProcessC:public QThread
{
public:
    ProcessC();
    void run1();
protected:
    void run();
};

#endif // PROCESSC_H
