#ifndef PROCESSE_H
#define PROCESSE_H

#include <QThread>

class ProcessE: public QThread
{
public:
    ProcessE();
    void run1();

protected:
    void run();
};

#endif // PROCESSE_H
