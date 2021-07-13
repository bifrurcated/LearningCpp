#include <iostream>
#include <ctime>

using namespace std;

int Factorial(unsigned int a) {
    cout << a << "*";
    if (a <= 1)
    {
        return 1;
    }
    return a * Factorial(a - 1);
}

int main5()
{
    setlocale(LC_ALL, "RU");

    unsigned int a;
    a = 16;
    cout << Factorial(a);
    return 0;
}