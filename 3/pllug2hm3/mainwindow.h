#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDialog>
#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>


class MainWindow : public  QDialog
{
    Q_OBJECT

public:
     MainWindow(QWidget *parent = 0);

private:

    QHBoxLayout  *layout;
    QPushButton *button;
    QLineEdit *line;
private slots:

    void textinbutton();

};


#endif // MAINWINDOW_H
