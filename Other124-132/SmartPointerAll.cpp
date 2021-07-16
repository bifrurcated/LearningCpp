#include <iostream>
#include <string>
#include <memory>
#include "SmartPointer.h"

using namespace std;

/*
    smart pointers (умные указатели)
    auto_ptr - устарел, похож на unique_ptr
    unique_ptr
    shared_ptr
*/

int SmartPointerAll()
{
    setlocale(LC_ALL, "RU");

    SmartPointer<int> pointer(new int(523));

    SmartPointer<int> pointer2 = pointer;

    cout << *pointer << endl;

    auto_ptr<int> ap1(new int(5));
    auto_ptr<int> ap2(ap1); // затирает старый указатель ap1
    cout << "ap1 = " << ap1.get() << endl;
    cout << "ap2 = " << ap2.get() << endl;

    int* p = new int(5);
    unique_ptr<int> up1(p);
    unique_ptr<int> up2;
    up1.reset(); // очищает данные у (*p) и у (up1)
    up1.release(); // затираем указатель (up1), но (*p) остаётся в памяти
    up2.swap(up1); // затирает старый указатель up1
    //up2 = move(up1); // затирает старый указатель up1
    cout << "up1 = " << up1.get() << endl;
    cout << "up2 = " << up2.get() << endl;

    int* psp = new int(5);
    shared_ptr<int> sp1(psp);
    shared_ptr<int> sp2(psp);

    cout << "sp1 = " << sp1.get() << endl;
    cout << "sp2 = " << sp2.get() << endl;

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
