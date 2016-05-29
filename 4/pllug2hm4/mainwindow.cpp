#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QDialog(parent) //конструктор
{
button = new QPushButton;
line1= new QLineEdit;
line2= new QLineEdit;
horizontal = new QHBoxLayout;
vertical = new QVBoxLayout;
layout = new QHBoxLayout;
label =new QLabel;

horizontal->addWidget(line1);
horizontal->addWidget(line2);
vertical->addWidget(button);
vertical->addWidget(label);
layout->addLayout(horizontal);
layout->addLayout(vertical);

setLayout(layout);

connect(button,SIGNAL(clicked(bool)),this,SLOT(add()));
}

void MainWindow:: add()
{

 label->setText(QString::number(line1->text().toInt()+line2->text().toInt()));

}


