#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDialog>
#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

private:
    QPushButton *button;
    QLineEdit *line1;
    QLineEdit *line2;
    QLabel *label;
    QHBoxLayout *horizontal;
    QVBoxLayout *vertical;
    QHBoxLayout *layout;
public slots:
    void add();
};

#endif // MAINWINDOW_H
