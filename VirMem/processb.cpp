#include "processb.h"
#include <QDebug>


ProcessB::ProcessB()
{
}

ProcessB* ProcessB::instance = 0;

ProcessB* ProcessB::getInstance(){
    if(instance == 0){
        instance = new ProcessB();
    }
    return instance;
}


void ProcessB::run(){
    while(true){
        qDebug()<<"corriendo B";
        msleep(500);
    }

}


