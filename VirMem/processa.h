#ifndef PROCESSA_H
#define PROCESSA_H

#include <QThread>

class ProcessA: public QThread
{
public:
    ProcessA();
    void run1();
protected:
    void run();
};

#endif // PROCESSA_H
