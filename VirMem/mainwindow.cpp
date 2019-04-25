#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix1("/home/kei98/Downloads/TareaCorta/Carbody.png");
    QPixmap pix2("/home/kei98/Downloads/TareaCorta/Door.jpg");
    QPixmap pix3("/home/kei98/Downloads/TareaCorta/Motor.jpg");
    QPixmap pix4("/home/kei98/Downloads/TareaCorta/wheel");
    QPixmap pix5("/home/kei98/Downloads/TareaCorta/windshield.jpg");


    ui->label_pic1->setPixmap(pix1.scaled(100,100, Qt::KeepAspectRatio));
    ui->label_pic2->setPixmap(pix2.scaled(100,100, Qt::KeepAspectRatio));
    ui->label_pic3->setPixmap(pix3.scaled(100,100, Qt::KeepAspectRatio));
    ui->label_pic4->setPixmap(pix4.scaled(100,100, Qt::KeepAspectRatio));
    ui->label_pic5->setPixmap(pix5.scaled(100,100, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //Empezar simulación

}
