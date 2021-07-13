#include <iostream>
#include "HeaderA.h"
#include "HeaderB.h"


using namespace std;


/*
    Виртуальные деструкторы
*/

int VirtualDestructor()
{
    setlocale(LC_ALL, "RU");

    HeaderA* bptr = new HeaderB;
    delete bptr;

    return 0;
}
