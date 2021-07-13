#include <iostream>
#include <ctime>

using namespace std;

int MassiveUkaz()
{
    setlocale(LC_ALL, "RU");
    int const SIZE = 7;
    int arr[SIZE]{ 1,3,44,22,1,32,3 };

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";

    int* pArr = arr;
    cout << "pArr = " << pArr << endl;
    cout << "arr  = " << arr << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << *(pArr + i) << "\t";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << *&*&*&*&*&*&*(arr + i) << "\t";
    }
    for (int i = 100; i < 5000; i++)
    {
        cout << endl << *(arr + i) << endl;
    }

    return 0;
}