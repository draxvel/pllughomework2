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

private:
    QHBoxLayout *layout;
    QPushButton *knopka;
    QPushButton *setsize;

private slots:

    void setsizef();

};

#endif // MAINWINDOW_H
