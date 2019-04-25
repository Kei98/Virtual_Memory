#include "mainwindow.h"
#include <QApplication>
#include "producline.h"

int main(int argc, char *argv[])
{

    ProducLine *p = new ProducLine(2);
    ProducLine *b = new ProducLine(1);
    p->run1();
    b->run1();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
