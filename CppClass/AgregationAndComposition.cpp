#include <iostream>
#include "HumanBrain.h"
#include "Model.h"
using namespace std;

/*
    Агрегация и композиция.
*/

int AgrAndComp()
{
    setlocale(LC_ALL, "RU");
    HumanBrain human;
    human.Think(); // композиция
    human.InspectTheCap(); // агрегация
    Model moniken;
    moniken.InspectModel(); // aгрегация
    return 0;
}
