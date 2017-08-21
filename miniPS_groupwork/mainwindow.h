#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QFileDialog>
#include<QImage>
#include<QString>
#include<QTextStream>
#include<QMessageBox>
#include"imageedit1.h"//則與的程式
#include"imageedit2.h"//hehe的程式
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_open_clicked();

private:
    Ui::MainWindow *ui;
    ImageEdit1 *pImageEdit1;
    ImageEdit2 *pImageEdit2;

};

#endif // MAINWINDOW_H
