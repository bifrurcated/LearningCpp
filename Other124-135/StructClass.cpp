#include <iostream>
#include <string>

using namespace std;

/*
    Структуры, struct
*/

class MyClass1 {
public:
    int a = 10;
    MyClass1() {}
    MyClass1(int a) { this->a = a; }
    void Print() { cout << a << endl; }
};

class MyClass2 : public MyClass1 { //по умолчанию private

};

struct MyStruct1 { // по умолчанию все поля public и при наследовании тоже
    void Print() { cout << a << endl; }
    MyStruct1() {}
    MyStruct1(int a) { this->a = a; }
    ~MyStruct1() {}
    int a = 22;
};

struct MyStruct2 : MyClass2 { // по умолчанию public наследование
};

int main()
{
    //Структуры это тоже самое что и классы но по умолчанию там используется модификатор public
    setlocale(LC_ALL, "RU");

    MyClass1 m(3);
    MyClass2 m2;

    m2.a = 3;
    m.Print();

    MyStruct1 ms(33);
    MyStruct2 ms2;

    ms2.a = 34;
    cout << "ms2.a = " << ms2.a << endl;
    ms.Print();

    return 0;
}
