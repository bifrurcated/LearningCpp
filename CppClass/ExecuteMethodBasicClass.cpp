#include <iostream>
#include "Msg.h"
#include "BraketsMasg.h"
#include "Printer.h"

using namespace std;


/*
    Вызов метода базового класса
*/

int ExecuteMethodBasicClass()
{
    setlocale(LC_ALL, "RU");

    Msg m("Привет!");
    BraketsMsg bm("Пока!");

    Printer p;
    p.Print(&bm);

    return 0;
}
