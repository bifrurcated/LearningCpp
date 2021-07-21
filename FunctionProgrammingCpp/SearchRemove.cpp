#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Person.h"

using namespace std;

/*
* Бибилиотека стандартных шаблонов (STL)
* Алгоритмы
* удаление элемента
* std::remove, std::remove_if
*/

template<typename T>
void PrintPersonD(T const& t) {
	for (auto const& el : t) {
		cout << "Имя:\t" << el.name << "\tбаллы:\t" << el.score << "\tвозраст:\t" << el.age << endl;
	}
	cout << endl;
}

template<typename T>
void PrintVec(T const& t) {
	for (auto const& el : t) {
		cout << el << "\t";
	}
	cout << endl;
}

int SearchRemove()
{
	setlocale(LC_ALL, "RU");

	vector<Person> people{
		Person("Вася", 181, 17),
		Person("Петя", 30, 20),
		Person("Маша", 179, 31),
		Person("Даша", 200, 19),
		Person("Катя", 198, 16),
		Person("Андрей", 181, 21),
		Person("Сергей", 50, 20),
		Person("Иван", 150, 32),
	};
	PrintPersonD(people);
	/*auto res = remove_if(people.begin(), people.end(),
		[](Person const& p1)
		{
			return p1.age < 18;
		}
	);
	people.erase(res, people.end());*/
	//без промежуточной переменной
	people.erase(remove_if(people.begin(), people.end(),
		[](Person const& p)
		{
			return p.age < 18 || p.score < 180;
		}
	), people.end());
	PrintPersonD(people);

	vector<int> vec = { 5,9,1,46,4,9,4 };

	PrintVec(vec);
	//функция remove перемещает все ненужные элементы в конец списка
	//и возвращает итератор на первый ненужный элемент
	//удалить мы можем с помощью метода самой коллекции erase
	auto result = remove(vec.begin(), vec.end(), 4);
	PrintVec(vec);
	vec.erase(result, vec.end());
	PrintVec(vec);

	string str = "Текст с несколькими   пробелами  ";
	cout << str << endl;
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	cout << str << endl;

	return 0;
}
