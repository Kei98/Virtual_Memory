#include "processd.h"
#include <QDebug>


ProcessD::ProcessD()
{
}

ProcessD* ProcessD::instance = 0;

ProcessD* ProcessD::getInstance(){
    if(instance == 0){
        instance = new ProcessD();
    }
    return instance;
}


void ProcessD::run(){
    qDebug()<< "corriendo D";
}


