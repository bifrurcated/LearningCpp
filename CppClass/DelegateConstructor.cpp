#include <iostream>
#include "HumanDelegate.h"

using namespace std;


/*
    ������������ �����������
*/

int DelegateConstructor()
{
    setlocale(LC_ALL, "RU");

    HumanDelegate human("Poul", 20, 70);

    return 0;
}
