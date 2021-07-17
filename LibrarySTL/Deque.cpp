#include <iostream>
#include <deque>
#include <vector>

using namespace std;

/*
	Бибилиотека стандартных шаблонов (STL)
	deque (vector+двусвязный список)
*/


int Deque()
{
	setlocale(LC_ALL, "RU");

	deque<int> dq = { 5,3,2,23 };
	//методы такие же как в list и vector
	cout << "size = " << dq.size() << endl;

	deque<int>::iterator it = dq.begin();
	//итератор произвольного доступа
	it += 2;
	cout << *it << endl;

	return 0;
}
