#include "processb.h"
#include <QDebug>


ProcessB::ProcessB()
{
}


void ProcessB::run(){
    qDebug()<<"corriendo B";
}

void ProcessB::run1(){
    return this->run();

}
