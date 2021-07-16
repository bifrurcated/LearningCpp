#include <iostream>
#include "List.cpp"

/*
	Односвязный список
	реализация
*/

int main()
{
	List<int> lst;
	lst.push_back(5);
	lst.push_back(15);
	lst.push_back(13);
	std::cout << lst.GetSize() << std::endl;
	std::cout << lst[3] << std::endl;
}
