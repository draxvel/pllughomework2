#include "mainwindow.h"
#include <QApplication>

//Створити калькулятор із двох полів для вводу тексту
//(QLineEdit) однієї кнопки(QPushButton)та
//компоненти QLabel на який виводимо результат.
//Виконувану арифметичну дію задає викладач.

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
