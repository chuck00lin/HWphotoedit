#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("miniPS");
    pImageEdit1= new ImageEdit1();
    pImageEdit2= new ImageEdit2();
    pImageEdit3= new ImageEdit3();
}

MainWindow::~MainWindow()
{ 
    delete image;
    delete pImageEdit1;
    delete pImageEdit2;
    delete pImageEdit3;
    delete ui;

}

void MainWindow::on_pushButton_open_clicked()//load image
{
    image= new QImage();//allocate memory to pointer "image"
    imagepath=QFileDialog::getOpenFileName(this,tr("open file"),"/",tr("images(*.png *.jpg)"));
    image->load(imagepath);
    pixmap= QPixmap::fromImage(*image);
    ui->label->setPixmap(pixmap.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_save_clicked()
{
    QString ipath=QFileDialog::getSaveFileName(this,tr("save file"),"/",tr("PNG(*.png);;JPG(*.jpg)"));
    image->save(ipath);

}

void MainWindow::on_pushButton_E1_clicked()
{
    pImageEdit3->effect1(image);
    pixmap= QPixmap::fromImage(*image);
    ui->label->setPixmap(pixmap.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_E2_clicked()
{
    pImageEdit3->effect2(image);
    pixmap= QPixmap::fromImage(*image);
    ui->label->setPixmap(pixmap.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_E3_clicked()
{
    pImageEdit1->effect3(image);
    pixmap= QPixmap::fromImage(*image);
    ui->label->setPixmap(pixmap.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_E4_clicked()
{
    pImageEdit1->effect4(image);
    pixmap= QPixmap::fromImage(*image);
    ui->label->setPixmap(pixmap.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));
}
void MainWindow::on_pushButton_E5_clicked()
{
    pImageEdit2->effect5(image);
    pixmap= QPixmap::fromImage(*image);
    ui->label->setPixmap(pixmap.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_E6_clicked()
{
    pImageEdit2->effect6(image);
    pixmap= QPixmap::fromImage(*image);
    ui->label->setPixmap(pixmap.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));
}
