#include "mainwindow.h"

  MainWindow::MainWindow(QWidget *parent) : QDialog(parent)//контсруктор
{
    button= new QPushButton;
    layout = new QHBoxLayout;
    layout->addWidget(button);
    setLayout(layout);
    connect(button,SIGNAL(,this,SLOT(changeposition()));
}

void MainWindow::changeposition()
{

   button->setGeometry(+0,+0,+20,+30);
}
