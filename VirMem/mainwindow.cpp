#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <QPixmap>
#include "producline.h"
#include "queue.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix1(":/Images/Carbody.png");
    QPixmap pix2(":/Images/door.jpeg");
    QPixmap pix3(":/Images/motor.jpeg");
    QPixmap pix4(":/Images/wheel.jpeg");
    QPixmap pix5(":/Images/windshield.jpeg");


    ui->label_pic1->setPixmap(pix1.scaled(230,170, Qt::KeepAspectRatio));
    ui->label_pic2->setPixmap(pix2.scaled(230,170, Qt::KeepAspectRatio));
    ui->label_pic3->setPixmap(pix3.scaled(230,170, Qt::KeepAspectRatio));
    ui->label_pic4->setPixmap(pix4.scaled(230,170, Qt::KeepAspectRatio));
    ui->label_pic5->setPixmap(pix5.scaled(230,170, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    for(int i = 0; i < 12; i++){
        //int a = rand() % 5 + 1;
        //qDebug()<< a;
        ProducLine *v = new ProducLine(rand() % 5 + 1);
        mainQueue->Enqueue(*v);
        v->run();

    }



//    ProducLine *v1 = new ProducLine(1);
//    ProducLine *v2 = new ProducLine(2);
//    ProducLine *v3 = new ProducLine(3);
//    ProducLine *v4 = new ProducLine(4);
//    ProducLine *v5 = new ProducLine(5);
//    ProducLine *v6 = new ProducLine(6);
//    v1->run();
//    v2->run();
//    v3->run();
//    v4->run();
//    v5->run();
//    v6->run();




}
