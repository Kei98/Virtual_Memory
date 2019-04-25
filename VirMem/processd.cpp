#include "processd.h"
#include <QDebug>


ProcessD::ProcessD()
{
}


void ProcessD::run(){
    qDebug()<< "corriendo D";
}

void ProcessD::run1(){
    return this->run();
}
