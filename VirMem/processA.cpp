#include "processA.h"
#include <QDebug>

using namespace std;

ProcessA::ProcessA()
{
}

void ProcessA::run(){
    qDebug()<< "pos corriendo proceso A";
}

