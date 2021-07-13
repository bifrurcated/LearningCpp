#include <iostream>
#include <ctime>

using namespace std;

int DynamicMassice()
{
    setlocale(LC_ALL, "RU");
    int rows = 4;
    int cols = 5;

    cout << "Enter array rows: ";
    cin >> rows;
    cout << "Enter array cols: ";
    cin >> cols;

    int** arr = new int* [rows];

    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    /////////////////////////////////

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    /////////////////////////////////
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
        arr[i] = nullptr;
    }
    delete[] arr;
    arr = nullptr;
    return 0;
}