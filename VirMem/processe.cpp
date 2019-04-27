#include "processe.h"
#include <QDebug>

ProcessE::ProcessE()
{
}

ProcessE* ProcessE::instance = 0;

ProcessE* ProcessE::getInstance(){
    if(instance == 0){
        instance = new ProcessE();
    }
    return instance;
}


void ProcessE::run(){
    qDebug()<<"corriendo E";
}

