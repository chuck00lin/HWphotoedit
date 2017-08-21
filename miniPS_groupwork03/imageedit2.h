#ifndef IMAGEEDIT2_H
#define IMAGEEDIT2_H
#include <QMainWindow>
#include<QFileDialog>
#include<QImage>
#include<QString>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>

class ImageEdit2
{
public:
    ImageEdit2();
    void effect5(QImage *image);
    void effect6(QImage *image);
};

#endif // IMAGEEDIT2_H
