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
#include"imageedit3.h"
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

    void on_pushButton_save_clicked();

    void on_pushButton_E1_clicked();

    void on_pushButton_E2_clicked();

private:
    Ui::MainWindow *ui;
    ImageEdit1 *pImageEdit1;//生命週期是這個class 建立變數使用這幾個class
    ImageEdit2 *pImageEdit2;
    ImageEdit3 *pImageEdit3;
    QPixmap pixmap;
    QString imagepath;
    QImage *image;
};

#endif // MAINWINDOW_H
