#include <iostream>
#include "CoffeeGrinder.h"
#include "MyClass.h"
#include "TestClass.h"
#include "Point.h"
#include "Test.h"
#include "Apple.h"
#include "Human.h"

using namespace std;

void Foo(MyClass value)
{
    cout << "Вызвалась функция Foo" << endl;
}

MyClass Foo2()
{
    cout << "Вызвалась функция Foo2" << endl;
    MyClass temp(1);
    return temp;
}

void ChangeX(Point& point, Test& testValue)
{
    testValue.Data = 1;
    point.x = -1;
    //this в friend функциях не работают
}

void Human::TakeApple(Apple& apple)
{
    //экономим память передавая по ссылке
    std::cout << "TakeApple " << "weight = " << apple.weight
        << " color = " << apple.color << std::endl;
}

int TestingClass()
{
    setlocale(LC_ALL, "RU");
    CoffeeGrinder coffee;
    coffee.Start();

    Human firstHuman;
    firstHuman.age = 20;
    firstHuman.weight = 70;
    firstHuman.name = "Max";
    firstHuman.ToString();

    Point a(1, 2, 3);
    Point b(1, 4, 3);
    b = a++;
    b.ToString();
    a.ToString();
    cout << (a != b ? "a!=b" : "a==b") << endl;


    {
        MyClass a(10);
        MyClass b(2);
        MyClass c(5);
        c = a = b;
    }

    TestClass tc;
    cout << "tc[0] = " << tc[0] << endl;
    tc[0] = 10;
    cout << "tc[0] = " << tc[0] << endl;

    Point point(5, 12, 2);
    point.ToString();
    Test test;
    ChangeX(point, test);
    point.ToString();

    Apple apple(150, "Red");
    {
        Apple apple2(100, "Green");
    }
    cout << "GetCount = " << apple.GetCount() << endl;
    Apple::ChangeColor(apple, "Green");
    Apple apple3(23, "Yellow");
    cout << "GetCount = " << apple.GetCount() << endl;
    Human man;
    man.TakeApple(apple);
    cout << "id = " << man.id << endl;
    Human man2;
    cout << "id = " << man2.id << endl;
    return 0;
}
