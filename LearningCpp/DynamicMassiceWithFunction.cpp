#include <iostream>

using namespace std;

void FillArray(int* const arr, int const size) {
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void ShowArray(int const* const arr, int const size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void CopyArray(int*& arr1, int const* const arr2, int const size) {
    delete[] arr1;
    arr1 = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr1[i] = arr2[i];
    }
}

void push_back(int*& arr, int& size, int const value) {
    int* newArray = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    newArray[size] = value;
    size++;
    delete[] arr;
    arr = newArray;
    newArray = nullptr;
}

void pop_back(int*& arr, int& size) {
    size--;
    int* newArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    delete[] arr;
    arr = newArray;
    newArray = nullptr;
}

void push_start(int*& arr, int& size, int const value) {
    size++;
    int* newArray = new int[size];
    newArray[0] = value;
    for (int i = 1; i < size; i++)
    {
        newArray[i] = arr[i - 1];
    }
    delete[] arr;
    arr = newArray;
    newArray = nullptr;
}

void pop_start(int*& arr, int& size) {
    size--;
    int* newArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i + 1];
    }
    delete[] arr;
    arr = newArray;
    newArray = nullptr;
}

void push_index(int*& arr, int& size, int const value, int const index) {
    if (index < 0 || index >= size) return;
    int* newArray = new int[size + 1];
    bool isIndex = false;
    for (int i = 0; i < size; i++)
    {
        if (i == index) {
            newArray[i] = value;
            isIndex = true;
        }
        if (isIndex) {
            newArray[i + 1] = arr[i];
        }
        else {
            newArray[i] = arr[i];
        }
    }
    size++;
    delete[] arr;
    arr = newArray;
    newArray = nullptr;
}

void pop_index(int*& arr, int& size, int const index) {
    if (index < 0 || index >= size) return;
    size--;
    int* newArray = new int[size];
    bool isIndex = false;
    for (int i = 0; i < size; i++)
    {
        if (i == index) {
            isIndex = true;
        }
        if (isIndex) {
            newArray[i] = arr[i + 1];
        }
        else {
            newArray[i] = arr[i];
        }
    }
    delete[] arr;
    arr = newArray;
    newArray = nullptr;
}

int DynamicMassiceWithFunction()
{
    setlocale(LC_ALL, "RU");
    int rows = 10;

    //cout << "Enter array rows: ";
    //cin >> rows;

    int* arr1 = new int[3];
    int* arr2 = new int[rows];
    /////////////////////////////////

    FillArray(arr1, 3);
    FillArray(arr2, rows);
    CopyArray(arr1, arr2, rows);
    ShowArray(arr1, rows);
    push_index(arr1, rows, 10, 3);
    ShowArray(arr1, rows);
    pop_index(arr1, rows, 7);
    ShowArray(arr1, rows);


    /////////////////////////////////
    delete[] arr1;
    arr1 = nullptr;
    delete[] arr2;
    arr2 = nullptr;
    return 0;
}