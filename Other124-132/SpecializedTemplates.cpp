#include <iostream>
#include "Printer.h"

using namespace std;

/*
    ������������� �������� ������
*/

int SpecializedTemplates()
{
    setlocale(LC_ALL, "RU");

    Printer<string> p;

    p.Print("Hello World!");

    Printer<int> ip;

    ip.Print(222);

    return 0;
}
