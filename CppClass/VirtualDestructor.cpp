#include <iostream>
#include "HeaderA.h"
#include "HeaderB.h"


using namespace std;


/*
    ����������� �����������
*/

int VirtualDestructor()
{
    setlocale(LC_ALL, "RU");

    HeaderA* bptr = new HeaderB;
    delete bptr;

    return 0;
}
