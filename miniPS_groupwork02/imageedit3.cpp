#include "imageedit3.h"

ImageEdit3::ImageEdit3()
{

}

void ImageEdit3::effect1(QImage *image)
{
    QRgb val;
    QColor oldcolor;
    for(int x=0; x<image->width();x++){
        for(int y=0;y<image->height();y++){
            oldcolor=QColor(image->pixel(x,y));
            int ave=(oldcolor.red()+oldcolor.green()+oldcolor.blue())/3;
            val=qRgb(ave,ave,ave);
            image->setPixel(x,y,val);
        }
    }

}
void ImageEdit3::effect2(QImage *image)
{
    QRgb val;
    QColor oldcolor;
    for(int x=0; x<image->width();x++){
        for(int y=0;y<image->height();y++){
            oldcolor=QColor(image->pixel(x,y));
            int ave=oldcolor.red();
            val=qRgb(ave,ave,ave);
            image->setPixel(x,y,val);
        }
    }
}
