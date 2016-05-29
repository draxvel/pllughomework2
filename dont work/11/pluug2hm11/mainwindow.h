#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDialog>
#include <QMainWindow>
#include <QPushButton>
#include <QRadioButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QTimer>

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

    QPushButton *start;
    QPushButton *stop;
    QRadioButton *red;
    QRadioButton *yellow;
    QRadioButton *green;
    QVBoxLayout *vertical1;
    QVBoxLayout *vertical2;
    QHBoxLayout *mainlayout;
    QTimer *timer;

public slots:
    void trafficlights();
};




#endif // MAINWINDOW_H
