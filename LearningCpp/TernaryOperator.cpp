#include <iostream>

using namespace std;

/*тернарный оператов*/

int TernaryOperator()
{
    setlocale(LC_ALL, "RU");
    int a = 4;
    a++; // унарная операция взаимодействует с одной переменной
    int b = 6;
    a + b;//бинарная операция потому что взаимодействую с двумя операторами
    if (true) {}
    else {} // ?: это тернарный оператор взаимодействует с 3 операторами
    a--;
    a > 4 ? cout << "a больше 4" << endl : a < 4 ? cout << "a меньше 4" << endl : cout << "a равен 4" << endl;
    return 0;
}