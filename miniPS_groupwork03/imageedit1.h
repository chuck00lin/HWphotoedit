#ifndef IMAGEEDIT1_H
#define IMAGEEDIT1_H
#include <QDialog>
#include<QFileDialog>
#include<QImage>
#include<QString>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>

class ImageEdit1
{
public:
    ImageEdit1();
    void effect3(QImage *image);
    void effect4(QImage *image);
};

#endif // IMAGEEDIT1_H
