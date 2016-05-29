#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>

/*Поставити компоненту для вводу тексту та кнопку(QLineEdit та QPushButton).
 * Вводимо текст і натиснувши на кнопку, вона міняє свою назву на ту,
 * яка була введене в дане поле(Функція setText())
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MainWindow *window = new MainWindow;
    window->show();



    return a.exec();
}
