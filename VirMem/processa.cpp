#include "processa.h"
#include <QDebug>
#include "mainwindow.h"

ProcessA::ProcessA(){

}

ProcessA* ProcessA::instance = 0;

ProcessA* ProcessA::getInstance(){
    if(instance == 0){
        instance = new ProcessA();
    }
    return instance;
}

void ProcessA::run(){

    while(true){
        if(!alreadyInUse){

        }
        qDebug()<<"corriendo A";
        msleep(1000);
    }

}


