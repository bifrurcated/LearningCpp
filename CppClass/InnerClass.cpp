#include <iostream>
#include "Image.h"

using namespace std;

int InnerClass()
{
    setlocale(LC_ALL, "RU");
    /*Вложенные классы*/
    Image img;
    img.GetImageInfo();

    const int SIZE = 5;
    Image::Pixel arr[SIZE]{
        Image::Pixel(13,12,44),
        Image::Pixel(133,22,244),
        Image::Pixel(255,255,255),
        Image::Pixel(223,0,2),
        Image::Pixel(2,120,230),
    };
    cout << arr[0].GetInfo() << endl;
    arr[0] = Image::Pixel(11, 244, 123);
    cout << arr[0].GetInfo() << endl;

    Image::Pixel* pixelArr = new Image::Pixel[SIZE];
    pixelArr[0] = Image::Pixel(9, 3, 6);
    cout << pixelArr[0].GetInfo() << endl;
    delete[] pixelArr;
    return 0;
}
