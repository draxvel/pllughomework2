#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QDialog(parent)//контсруктор

{
    button= new QPushButton();
    line = new QLineEdit();
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(button);
    layout->addWidget(line);
    setLayout(layout);

    connect(button,SIGNAL(clicked(bool)),this,SLOT(textinbutton()));

}


void MainWindow::textinbutton()
{
    button->setText(line->text());
   // button->setText("test");
}
