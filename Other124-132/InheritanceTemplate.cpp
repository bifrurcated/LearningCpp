#include <iostream>
#include "TypeInfo.h"
#include "TypeSize.h"
#include "Point.h"

using namespace std;

/*
    Наследование шаблонов
*/

int InheritanceTemplate()
{
    setlocale(LC_ALL, "RU");

    int a = 2;
    TypeInfo<int> ti(a);
    ti.DataTypeSize();
    ti.ShowTypeName();

    Point p;
    TypeInfo<Point> ti2(p);
    ti2.DataTypeSize();
    ti2.ShowTypeName();

    return 0;
}
