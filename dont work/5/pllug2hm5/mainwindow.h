#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDialog>
#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    QPushButton *button;
    QHBoxLayout *layout;

public slots:
void changeposition();

};



#endif // MAINWINDOW_H
