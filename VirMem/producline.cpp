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

    A->queue->Enqueue(tipo);
    B->queue->Enqueue(tipo);
    C->queue->Enqueue(tipo);
    D->queue->Enqueue(tipo);
    E->queue->Enqueue(tipo);

    A->start();
    B->start();
    C->start();
    D->start();
    E->start();
}

void ProducLine::line2(){
    ProcessC *C = ProcessC::getInstance();
    ProcessD *D = ProcessD::getInstance();
    ProcessA *A = ProcessA::getInstance();
    ProcessB *B = ProcessB::getInstance();
    ProcessE *E = ProcessE::getInstance();

    C->queue->Enqueue(tipo);
    D->queue->Enqueue(tipo);
    A->queue->Enqueue(tipo);
    B->queue->Enqueue(tipo);
    E->queue->Enqueue(tipo);

    C->start();
    D->start();
    A->start();
    B->start();
    E->start();

}

void ProducLine::line3(){

    ProcessE *E = ProcessE::getInstance();
    ProcessB *B = ProcessB::getInstance();
    ProcessA *A = ProcessA::getInstance();
    ProcessC *C = ProcessC::getInstance();
    ProcessD *D = ProcessD::getInstance();

    E->queue->Enqueue(tipo);
    B->queue->Enqueue(tipo);
    A->queue->Enqueue(tipo);
    C->queue->Enqueue(tipo);
    D->queue->Enqueue(tipo);

    E->start();
    B->start();
    A->start();
    C->start();
    D->start();

}

void ProducLine::line4(){
    ProcessA *A = ProcessA::getInstance();
    ProcessB *B = ProcessB::getInstance();
    ProcessC *C = ProcessC::getInstance();
    ProcessD *D = ProcessD::getInstance();
    ProcessE *E = ProcessE::getInstance();

    D->queue->Enqueue(tipo);
    E->queue->Enqueue(tipo);
    C->queue->Enqueue(tipo);
    A->queue->Enqueue(tipo);
    B->queue->Enqueue(tipo);

    D->start();
    E->start();
    C->start();
    A->start();
    B->start();

}

void ProducLine::line5(){
    ProcessA *A = ProcessA::getInstance();
    ProcessB *B = ProcessB::getInstance();
    ProcessC *C = ProcessC::getInstance();
    ProcessD *D = ProcessD::getInstance();
    ProcessE *E = ProcessE::getInstance();

    A->queue->Enqueue(tipo);
    C->queue->Enqueue(tipo);
    E->queue->Enqueue(tipo);
    B->queue->Enqueue(tipo);
    D->queue->Enqueue(tipo);

    A->start();
    C->start();
    E->start();
    B->start();
    D->start();

}

void ProducLine::line6(){

    ProcessA *A = ProcessA::getInstance();
    ProcessB *B = ProcessB::getInstance();
    ProcessC *C = ProcessC::getInstance();
    ProcessD *D = ProcessD::getInstance();
    ProcessE *E = ProcessE::getInstance();

    B->queue->Enqueue(tipo);
    C->queue->Enqueue(tipo);
    A->queue->Enqueue(tipo);
    D->queue->Enqueue(tipo);
    E->queue->Enqueue(tipo);

    B->start();
    C->start();
    A->start();
    D->start();
    E->start();

}
