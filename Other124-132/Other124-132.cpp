#include <iostream>
#include <string>
#include <memory>
#include "SmartPointer.h"

using namespace std;

/*
    smart pointers (умные указатели)
    Умные указатели на массив
*/

int main()
{
    setlocale(LC_ALL, "RU");

    int SIZE = 5;
    cout << "Введите размер массива: ";
    cin >> SIZE;
    int* arr = new int[SIZE] {};
    shared_ptr<int[]> sp(arr);
    for (int i = 0; i < SIZE; i++)
    {
        sp[i] = rand() % 10;
        cout << sp[i] << endl;
    }
    return 0;
}
