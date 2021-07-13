#include <iostream>
#include <ctime>
using namespace std;

void main3()
{
    setlocale(LC_ALL, "RU");

    const int SIZE = 1000;
    int arr[SIZE]{};
    int a = sizeof(arr);
    int b = sizeof(arr[0]);

    //cout << a/b << endl;

    srand((unsigned)time(0));
    unsigned int start_time = clock();
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 5000;
        for (int j = 0; j < i; j++)
        {
            while (arr[i] == arr[j])
            {
                arr[i] = rand() % 5000;
                j = 0;
            }
        }
    }
    unsigned int end_time = clock();
    printf("\nProgram execution time1 = %.3lf sec.\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

    start_time = clock();
    bool alreadyThere;
    for (int i = 0; i < SIZE;)
    {
        alreadyThere = false;
        int newRandomValue = rand() % 5000;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == newRandomValue) {
                alreadyThere = true;
                break;
            }
        }
        if (!alreadyThere) {
            arr[i] = newRandomValue;
            i++;
        }
    }
    end_time = clock();
    printf("\nProgram execution time2 = %.3lf sec.\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

    int min = arr[0];
    for (int i = 0; i < SIZE - 1; i++)
    {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    cout << "min = " << min << endl;
    for (int i = 1; i < SIZE; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int k = arr[i];
            if (k < arr[j]) {
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }
}
