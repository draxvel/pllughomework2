#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QDialog(parent)
{
  start = new QPushButton;
  stop = new QPushButton;
  red = new QRadioButton;
  yellow = new QRadioButton;
  green = new QRadioButton;
  vertical1 = new QVBoxLayout;
  vertical2 = new QVBoxLayout;
  mainlayout = new QHBoxLayout;
  timer = new QTimer;

connect(timer,SIGNAL(timeout()),this,SLOT(trafficlights()));
timer->start(1000);
}

void MainWindow::trafficlights()
{
    if (&red->isChecked= true)
    {
        yellow->setChecked(false);
        green->setChecked(false);
    }


    if (&yellow->isChecked=true)
    {
        red->setChecked(false);
        green->setChecked(false);
    }

    else
    green->setChecked(true);
}
