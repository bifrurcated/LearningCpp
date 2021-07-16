#include <iostream>
#include "MyList.h"

int main()
{
    setlocale(LC_ALL, "RU");
    MyList<int> lst;
    
    int numberCount;
    std::cout << "Введите размер списка: ";
    std::cin >> numberCount;

    for (int i = 0; i < numberCount; i++)
    {
        lst.push_back(rand() % 10);
    }
    for (int i = 0; i < lst.GetSize(); i++)
    {
        std::cout << lst[i] << std::endl;
    }
    std::cout << "Size length = " << lst.GetSize() << std::endl;
    lst.clear();
    std::cout << "Size length = " << lst.GetSize() << std::endl;
    lst.push_front(2);
    lst.push_front(4);
    lst.push_front(5);
    lst.push_front(6);
    lst.push_front(7);
    
    std::cout << "Данные до insert:" << std::endl;
    for (int i = 0; i < lst.GetSize(); i++)
    {
        std::cout << lst[i] << "\t";
    }
    std::cout << "\n";

    lst.insert(3, 2);

    std::cout << "Данные после insert:" << std::endl;
    for (int i = 0; i < lst.GetSize(); i++)
    {
        std::cout << lst[i] << "\t";
    }
    std::cout << "\n";

    lst.removeAt(2);

    std::cout << "Данные после removeAt:" << std::endl;
    for (int i = 0; i < lst.GetSize(); i++)
    {
        std::cout << lst[i] << "\t";
    }
    std::cout << "\n";

    lst.pop_back();

    std::cout << "Данные после pop_back:" << std::endl;
    for (int i = 0; i < lst.GetSize(); i++)
    {
        std::cout << lst[i] << "\t";
    }
    std::cout << "\n";

    return 0;
}

