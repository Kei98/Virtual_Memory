#include "processe.h"
#include <QDebug>

ProcessE::ProcessE()
{
}


void ProcessE::run(){
    qDebug()<<"corriendo E";
}

void ProcessE::run1(){
    return this->run();
}
