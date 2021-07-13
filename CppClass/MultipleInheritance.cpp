#include <iostream>
#include "Car.h"
#include "Airplain.h"
#include "FlyingCar.h"

using namespace std;


/*
    ������������� ������������
    ������� ������ ������������� ��� ������������� ������������
    ������������� ������������ ���������� ������
*/

int MultipleInheritance()
{
    setlocale(LC_ALL, "RU");

    Car car;
    car.Use();
    Airplane airplane;
    airplane.Use();

    FlyingCar fc("Machine", "Airplain");
    fc.Car::Use();
    ((Airplane)fc).Use();
    cout << fc.str1 << endl;
    cout << fc.str2 << endl;

    Car* ptrC = new FlyingCar;
    delete ptrC;



    return 0;
}
