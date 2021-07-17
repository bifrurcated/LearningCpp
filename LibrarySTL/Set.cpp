#include <iostream>
#include <set>

using namespace std;

/*
	Бибилиотека стандартных шаблонов (STL)
	set - реализованы на основе бинарного дерева
*/

template <typename T>
void PrintSet(set<T> const& s) {
	for (auto const& it : s)
	{
		cout << it << "\t";
	}
	cout << endl;
}

int Set()
{
	setlocale(LC_ALL, "RU");
	//изменить какое-то конкретное число нельзя
	//но можно удалить и добавить новое
	set<int> mySet = { 1,33,2,12,4,3 };

	auto res = mySet.insert(4); // значения всегда уникальны и в одном экземпляре
	//Если смог добавить элемент в коллекцию второй возвращаемый результат будет true (1), иначе false (0)
	cout << "res.first = " << *res.first << " res.second = " << res.second << endl;
	res = mySet.insert(6);
	cout << "res.first = " << *res.first << " res.second = " << res.second << endl;
	PrintSet(mySet);

	auto it = mySet.find(4); //метод поиска числа, если не найдёт то установит итератор на mySet.end()
	cout << "*it = " << *it << endl;

	cout << "erase(4)" << endl;
	auto result = mySet.erase(4); //Если он не сможет удалить то функция вернёт 0 иначе 1
	cout << "result 4 = " << result << endl;
	PrintSet(mySet);

	int value;
	cout << "Введите число для поиска: ";
	cin >> value;
	if (mySet.find(value) != mySet.end()) {
		cout << "Число: " << value << " найдено." << endl;
	}
	else {
		cout << "Число: " << value << " отсутствует!" << endl;
	}

	return 0;
}
