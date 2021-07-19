#include <iostream>
#include <map>

using namespace std;

/*
*	Библиотека стандарных шаблонов (STL)
*	map (бинарное дерево, хранит пары значений) только уникальные
*	multimap может хранить повторяющиеся значения
*/

template <typename T1, typename T2>
void PrintMultimap(multimap<T1, T2> m) {
	for (pair<T1, T2> const& p : m)
	{
		cout << p.first << "\t" << p.second << endl;
	}
}

int Multimap()
{
	setlocale(LC_ALL, "RU");
	//нет оператора [] и at()
	multimap<string, int> myMultimap;
	myMultimap.emplace("Maxim", 12233);
	myMultimap.emplace("Max", 16233);
	myMultimap.emplace("Max", 157233);
	myMultimap.emplace("Max", 11800);
	myMultimap.emplace("Jonh", 22233);

	PrintMultimap(myMultimap);

	return 0;
}
