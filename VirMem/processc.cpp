#include "processc.h"
#include <QDebug>


ProcessC::ProcessC()
{
}

ProcessC* ProcessC::instance = 0;

ProcessC* ProcessC::getInstance(){
    if(instance == 0){
        instance = new ProcessC();
    }
    return instance;
}

void ProcessC::run(){
    qDebug()<<"corriendo C";
}


