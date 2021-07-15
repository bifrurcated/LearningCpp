#include <iostream>
#include <ctime>

using namespace std;

template<typename T1>
void swapValue(T1& pa, T1& pb) {
    T1 tmp = pa;
    pa = pb;
    pb = tmp;
}

int LinkTemplate()
{
    setlocale(LC_ALL, "RU");
    int a = 5, b = 7;
    int* pa = &a;   //указатель
    int& aRef = a;  //ссылка
    char symbol1 = 'A', symbol2 = 'B';
    swapValue(symbol1, symbol2);
    cout << "symbol1 = " << symbol1 << endl;
    cout << "symbol2 = " << symbol2 << endl;
    swapValue(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}