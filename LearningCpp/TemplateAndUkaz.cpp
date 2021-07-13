#include "max1.hpp"
#include "maxauto.hpp"
#include "maxdecltype.hpp"
#include <iostream>


void main2()
{
    int a1 = 2, b1 = 3;
    std::cout << ::max(a1, b1) << "\n";
    std::cout << ::max2(a1, b1) << "\n";
    float c1 = 0.2f;

    auto m = ::max3(4, 7.2); // OK, но тип первого аргумента
                            // определяет возвращаемый тип
    std::cout << m << "\n";
    auto m2 = ::max3<double>(4, 7.2);//первый параметр сделали double а не int
    std::cout << m2 << "\n";

    std::cout << ::max4<double>(4, 3.2) << "\n"; // 3 параметра, где первый определяет тип возвращаемого объекта

    std::cout << ::maxauto(3.9997f, 3.9998f) << "\n";

    std::cout << ::maxdecltype(3.3f, 33) << "\n";

    // & - амперсант, операция взятия адреса
    // тип указателя и тип переменной на которую он указывает должен совпадать
    int a = 10;
    printf("a = %d\n&a = %p\n", a, &a);
    int* b, & c = a;
    printf("c1 = %d\n&c1 = %p\n", c, &c);
    b = &a;
    *b = 2;
    c = 13;
    printf("b = %p\n&b = %p\n*b = %d\n", b, &b, *b);
    printf("a = %d\n&a = %p\n", a, &a);
    printf("c2 = %d\n&c2 = %p\n", c, &c);

    float a2 = 1.0f, b2 = 2.33f;
    float* ukz = 0;
    ukz = &a2;
    *ukz = 1.33f;

    ukz = &b2;
    *ukz = b2 * 3;

    printf("a = %f\nb = %f\n", a2, b2);

    srand((unsigned)time(0));
    for (int i = 0; i < 10; i++)
        std::cout << ((float)rand() / RAND_MAX) * (-2.0f) + 1.0f << std::endl; // рандом от -1 до 1
}
