#include "processa.h"
#include <QDebug>


ProcessA::ProcessA()
{
}


void ProcessA::run(){
    while(true){
        qDebug()<<"corriendo A";
        msleep(1000);
    }

}

void ProcessA::run1(){
    return this->run();

}
