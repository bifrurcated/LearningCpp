#include <iostream>
#include "MyClass.h"
#include "Point.h"

using namespace std;

/*
    шаблоны классов
*/

int TemplateClass()
{
    setlocale(LC_ALL, "RU");

    Point p(1, 23, 4);
    MyClass<Point, char> mcP(p, 'F');
    mcP.DataTypeSize();

    double a = 12.332;
    MyClass<double, int> mc(a, 4);
    double b = mc.GetValue();
    cout << b << endl;
    cout << mc.GetValue2() << endl;

    return 0;
}
