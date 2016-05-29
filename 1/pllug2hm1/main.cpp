#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QPushButton *knopka = new QPushButton("close");
    knopka->show();

   QObject::connect(knopka,SIGNAL(clicked()),&a,SLOT(quit()),Qt::AutoConnection);

    //QObject::connect(knopka,SIGNAL(clicked()),w,SLOT(close()),Qt::AutoConnection);

    return a.exec();
}
