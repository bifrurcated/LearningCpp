#include <iostream>
#include "Msg.h"
#include "BraketsMasg.h"
#include "Printer.h"

using namespace std;


/*
    ����� ������ �������� ������
*/

int ExecuteMethodBasicClass()
{
    setlocale(LC_ALL, "RU");

    Msg m("������!");
    BraketsMsg bm("����!");

    Printer p;
    p.Print(&bm);

    return 0;
}
