#ifndef PRODUCLINE_H
#define PRODUCLINE_H
#include <QThread>


class ProducLine: public QThread
{
public:
    ProducLine(int);
    void line1();
    void line2();
    void line3();
    void line4();
    void line5();
    void line6();
    int tipo;
    void run1();
protected:
    void run();

};

#endif // PRODUCLINE_H
