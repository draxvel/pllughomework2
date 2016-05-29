#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow *window = new MainWindow;
    window->show();


    return a.exec();
}
