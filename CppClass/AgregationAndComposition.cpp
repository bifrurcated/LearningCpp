#include <iostream>
#include "HumanBrain.h"
#include "Model.h"
using namespace std;

/*
    ��������� � ����������.
*/

int AgrAndComp()
{
    setlocale(LC_ALL, "RU");
    HumanBrain human;
    human.Think(); // ����������
    human.InspectTheCap(); // ���������
    Model moniken;
    moniken.InspectModel(); // a��������
    return 0;
}
