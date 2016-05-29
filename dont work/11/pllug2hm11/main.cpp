#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTimer>

/* Світлофор": розмістити на формі три компоненти Radio Button (QRadioButton)
 * та дві кнопки Push Button (QPushButton).
 * Запрограмувати світлофор який вмикається при натиску накнопку "старт"
 * і вимикається при натиску на кнопку "стоп".
 * Для здійснення часових затримоквикористати клас Qtimer.
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton *start = new QPushButton;
    start->setText("Start");
    QPushButton *stop = new QPushButton;
    stop->setText("Stop");
    QRadioButton *rb1 =new QRadioButton;
    QRadioButton *rb2 =new QRadioButton;
    QRadioButton *rb3 =new QRadioButton;

    QTimer *timer = new QTimer;
//        timer->start(1000);
//        timer->stop(99999);


    QWidget *window = new QWidget;

    QHBoxLayout *hlayout = new QHBoxLayout;
    hlayout->addWidget(start);
    hlayout->addWidget(stop);

    QVBoxLayout *vlayout = new QVBoxLayout;
    vlayout->addWidget(rb1);
    vlayout->addWidget(rb2);
    vlayout->addWidget(rb3);

    QHBoxLayout *mainlayout = new QHBoxLayout;
    mainlayout->addLayout(vlayout);
    mainlayout->addLayout(hlayout);

    window->setLayout(mainlayout);
    window->show();

    QObject::connect(start,SIGNAL(clicked()),timer,SLOT (start()));
    if timer->start




    QObject::connect(stop,SIGNAL(clicked()),timer,SLOT(timeout));

    return a.exec();
}
