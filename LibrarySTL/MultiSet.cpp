#include <iostream>
#include <set>

using namespace std;

/*
	Бибилиотека стандартных шаблонов (STL)
	реализованы на основе бинарного дерева
	multiset
*/

template <typename T>
void PrintMultiset(multiset<T> const& s) {
	for (auto const& it : s)
	{
		cout << it << "\t";
	}
	cout << endl;
}

int MultiSet()
{
	setlocale(LC_ALL, "RU");

	//тот же set только может сохранять повторяющиеся значения
	multiset<int> myMultiset = { 0,11,11,2,34,6,2 };

	PrintMultiset(myMultiset);

	//принимает параметром число которые мы ищем
	auto it1 = myMultiset.lower_bound(11);//вернёт первое значение которое найдёт
	auto it2 = myMultiset.upper_bound(11);//вернёт следующий элемент который будет больше того что мы ищем
	cout << "it1 = " << *it1 << endl;
	cout << "it2 = " << *it2 << endl;

	auto equal = myMultiset.equal_range(11); // возвращает два значения чисел upped_bound и lower_bound
	cout << "equal.first = " << *equal.first << endl;
	cout << "equal.second = " << *equal.second << endl;

	return 0;
}
