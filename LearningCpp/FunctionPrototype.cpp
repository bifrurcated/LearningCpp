#include <iostream>
#include <ctime>

using namespace std;

void _FillArray(int arr[], const int size = 10);
void _PrintArray(int arr[], const int size = 10);

int main4()
{
    setlocale(LC_ALL, "RU");

    int const SIZE = 10;
    int arr[SIZE]{};
    _FillArray(arr);
    _PrintArray(arr);

    return 0;
}

void _FillArray(int arr[], int const size) {
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void _PrintArray(int arr[], int const size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}