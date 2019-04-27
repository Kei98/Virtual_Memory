#include "producline.h"
#include "processa.h"
#include "processb.h"
#include "processc.h"
#include "processd.h"
#include "processe.h"

ProducLine::ProducLine(int tipo){
    this->tipo = tipo;
}

ProducLine::ProducLine(){

}

void ProducLine::run(){
    if (tipo==1){
        line1();
    }else if(tipo==2) {
        line2();
    }else if(tipo==3) {
        line3();
    }else if(tipo==4) {
        line4();
    }else if(tipo==5) {
        line5();
    }else if(tipo==6) {
        line6();
    }
}

void ProducLine::line1(){
    ProcessA *A = ProcessA::getInstance();
    ProcessB *B = ProcessB::getInstance();
    ProcessC *C = ProcessC::getInstance();
    ProcessD *D = ProcessD::getInstance();
    ProcessE *E = ProcessE::getInstance();
    A->start();
    B->start();
    C->start();
    D->start();
    E->start();
}

void ProducLine::line2(){
    ProcessA *A = ProcessA::getInstance();
    ProcessB *B = ProcessB::getInstance();
    ProcessC *C = ProcessC::getInstance();
    ProcessD *D = ProcessD::getInstance();
    ProcessE *E = ProcessE::getInstance();
    A->start();
    B->start();
    C->start();
    D->start();
    E->start();

}

void ProducLine::line3(){

    ProcessA *A = ProcessA::getInstance();
    ProcessB *B = ProcessB::getInstance();
    ProcessC *C = ProcessC::getInstance();
    ProcessD *D = ProcessD::getInstance();
    ProcessE *E = ProcessE::getInstance();
    A->start();
    B->start();
    C->start();
    D->start();
    E->start();

}

void ProducLine::line4(){
    ProcessA *A = ProcessA::getInstance();
    ProcessB *B = ProcessB::getInstance();
    ProcessC *C = ProcessC::getInstance();
    ProcessD *D = ProcessD::getInstance();
    ProcessE *E = ProcessE::getInstance();
    A->start();
    B->start();
    C->start();
    D->start();
    E->start();

}

void ProducLine::line5(){
    ProcessA *A = ProcessA::getInstance();
    ProcessB *B = ProcessB::getInstance();
    ProcessC *C = ProcessC::getInstance();
    ProcessD *D = ProcessD::getInstance();
    ProcessE *E = ProcessE::getInstance();
    A->start();
    B->start();
    C->start();
    D->start();
    E->start();

}

void ProducLine::line6(){

    ProcessA *A = ProcessA::getInstance();
    ProcessB *B = ProcessB::getInstance();
    ProcessC *C = ProcessC::getInstance();
    ProcessD *D = ProcessD::getInstance();
    ProcessE *E = ProcessE::getInstance();
    A->start();
    B->start();
    C->start();
    D->start();
    E->start();

}
