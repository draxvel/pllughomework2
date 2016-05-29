#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QDialog(parent)//контсруктор

{
    knopka = new QPushButton("close");
    setsize = new QPushButton("setsize");
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(knopka);
    layout->addWidget(setsize);

    setLayout(layout);
    connect(knopka,SIGNAL(clicked()),this,SLOT(close()));
    connect(setsize,SIGNAL(clicked()),this,SLOT(setsizef()));
}


void MainWindow::setsizef()
{
    knopka->setGeometry(+20,+30,+35,+23) ;

}
