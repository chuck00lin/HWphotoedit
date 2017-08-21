#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("miniPS");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete[]image;
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
