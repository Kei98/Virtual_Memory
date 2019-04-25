#include "processc.h"
#include <QDebug>


ProcessC::ProcessC()
{
}

void ProcessC::run(){
    qDebug()<<"corriendo C";
}

void ProcessC::run1(){
    return this->run();
}
