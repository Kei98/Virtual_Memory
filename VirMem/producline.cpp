#include "producline.h"
#include "processa.h"
#include "processb.h"
#include "processc.h"
#include "processd.h"
#include "processe.h"

ProducLine::ProducLine(int tipo){
    this->tipo = tipo;
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

void ProducLine::run1(){
    return this->run();
}

void ProducLine::line1(){
    ProcessA *A= new ProcessA();
    ProcessB *B= new ProcessB();
    ProcessC *C= new ProcessC();
    ProcessD *D= new ProcessD();
    ProcessE *E= new ProcessE();
    A->run1();
    B->run1();
    C->run1();
    D->run1();
    E->run1();
}
void ProducLine::line2(){
    ProcessA *A= new ProcessA();
    ProcessB *B= new ProcessB();
    ProcessC *C= new ProcessC();
    ProcessD *D= new ProcessD();
    ProcessE *E= new ProcessE();
    A->run1();
    B->run1();
    C->run1();
    D->run1();
    E->run1();

}
void ProducLine::line3(){

    ProcessA *A= new ProcessA();
    ProcessB *B= new ProcessB();
    ProcessC *C= new ProcessC();
    ProcessD *D= new ProcessD();
    ProcessE *E= new ProcessE();
    A->run1();
    B->run1();
    C->run1();
    D->run1();
    E->run1();

}
void ProducLine::line4(){
    ProcessA *A= new ProcessA();
    ProcessB *B= new ProcessB();
    ProcessC *C= new ProcessC();
    ProcessD *D= new ProcessD();
    ProcessE *E= new ProcessE();
    A->run1();
    B->run1();
    C->run1();
    D->run1();
    E->run1();

}
void ProducLine::line5(){
    ProcessA *A= new ProcessA();
    ProcessB *B= new ProcessB();
    ProcessC *C= new ProcessC();
    ProcessD *D= new ProcessD();
    ProcessE *E= new ProcessE();
    A->run1();
    B->run1();
    C->run1();
    D->run1();
    E->run1();

}
void ProducLine::line6(){

    ProcessA *A= new ProcessA();
    ProcessB *B= new ProcessB();
    ProcessC *C= new ProcessC();
    ProcessD *D= new ProcessD();
    ProcessE *E= new ProcessE();
    A->run1();
    B->run1();
    C->run1();
    D->run1();
    E->run1();


}
