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
    int current;
    while(true){
        if(!alreadyInUse){
            if(queue->isEmpty()){
                qDebug()<<"Se terminó";
                break;
            }else{
                //Obtengo la línea
                current = queue->First();
                qDebug()<<"C";
                if(current == 1){
                    alreadyInUse = true;
                    if(prev != current){
                        while(percent1 < (33*rep1)){
                            percent1++;
                            //Acá se simula la barra del porcentaje
                            msleep(time1);
                        }
                        rep1++;
                    }
                    prev = queue->Dequeue();
                    queue->Enqueue(prev);
                    alreadyInUse = false;
                }else if(current == 2){
                    alreadyInUse = true;
                    if(prev != current){
                        while(percent2 < (33*rep2)){
                            percent2++;
                            msleep(time2);
                        }
                        rep2++;
                    }

                    prev = queue->Dequeue();
                    queue->Enqueue(prev);
                    alreadyInUse = false;
                }else if(current == 3){
                    alreadyInUse = true;
                    if(prev != current){
                        while(percent3 < (33*rep3)){
                            percent3++;
                            msleep(time3);
                        }
                        rep3++;
                    }

                    prev= queue->Dequeue();
                    queue->Enqueue(prev);
                    alreadyInUse = false;
                }else if(current == 4){
                    alreadyInUse = true;
                    if(prev != current){
                        while(percent4 < (33*rep4)){
                            percent4++;
                            msleep(time4);
                        }
                        rep4++;
                    }

                    prev = queue->Dequeue();
                    queue->Enqueue(prev);
                    alreadyInUse = false;
                }else if(current == 5){
                    alreadyInUse = true;
                    if(prev != current){
                        while(percent5 < (33*rep5)){
                            percent5++;
                            msleep(time5);
                        }
                        rep5++;
                    }
                    prev = queue->Dequeue();
                    queue->Enqueue(prev);
                    alreadyInUse = false;
                }else if(current == 6){
                    alreadyInUse = true;
                    if(prev != current){
                        while(percent6 < (33*rep6)){
                            percent6++;
                            msleep(time6);
                        }
                        rep6++;
                    }
                    prev = queue->Dequeue();
                    queue->Enqueue(prev);
                    alreadyInUse = false;
                }

            }

        }
    }
}


