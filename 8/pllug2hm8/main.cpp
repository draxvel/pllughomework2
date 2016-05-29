#include "mainwindow.h"
#include <QApplication>
#include <QSpinBox>
#include <QProgressBar>
#include <QSlider>
#include <QHBoxLayout>

/*Поставити на форму три конпоненти QSpinBox QProgressBar та QSlider.
 *Змінюючи значенняодного із них, автоматично міняється положення іншого відповідно.
 *Дослідити можливостівикористання вище названих компонент
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSpinBox *sb = new QSpinBox;
    QProgressBar *pb = new QProgressBar;
    QSlider *sd = new QSlider;
    sb->setMaximum(100);
    pb->setMaximum(100);
    sd->setMaximum(100);

    QWidget *window = new QWidget;
    QHBoxLayout *layout =new QHBoxLayout;


    layout->addWidget(sb);
    layout->addWidget(pb);
    layout->addWidget(sd);

    window->setLayout(layout);
    window->show();

    QObject::connect(sb,SIGNAL(valueChanged(int)),pb, SLOT(setValue(int)));
    QObject::connect(pb,SIGNAL(valueChanged(int)),sd,SLOT(setValue(int)));
    QObject::connect(sd,SIGNAL(valueChanged(int)),sb,SLOT(setValue(int)));


    return a.exec();
}
