#include <iostream>
#include <vector>
#include <list>

using namespace std;

/*
	цикл for each
	range based циклы
*/

template<typename T>
void PrintList(list<T> const& lst) {
	for (
		auto it = lst.begin();
		it != lst.end();
		++it // такая префиксная запись работает быстрее из-за того чо не надо создавать временную переменную
		)
	{
		cout << *it << "\t";
	}
	cout << endl;
}

int ForEach()
{
	setlocale(LC_ALL, "RU");
	int arr[] = { 1,234,51,23,5,7,9,6, };

	list<int> lst = { 1,3,2,14,7,9,6 };

	for (auto const& var : lst) {
		cout << var << "\t";
	}
	cout << endl;

	return 0;
}
