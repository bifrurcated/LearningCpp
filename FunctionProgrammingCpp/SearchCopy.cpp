#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Person.h"

using namespace std;

/*
* Бибилиотека стандартных шаблонов (STL)
* Алгоритмы
* ПОИСК
* std::copy, std::copy_if
*/

template<typename T>
void PrintPerson(T const& t) {
	for (auto const& el : t) {
		cout << "Имя:\t" << el.name << "\tбаллы:\t" << el.score << "\tвозраст:\t" << el.age << endl;
	}
	cout << endl;
}

int SearchCopy()
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

	vector<Person> result;
	// back_inserter помещает все элементы колллекции в другую коллекцию
	//copy(people.begin(), people.end(), back_inserter(result));
	copy_if(people.begin(), people.end(), back_inserter(result),
		[](Person const& p)
		{
			return p.age >= 18;
		}
	);
	PrintPerson(result);

	sort(result.begin(), result.end(),
		[](Person const& p1, Person const& p2)
		{
			return p1.age < p2.age;
		}
	);
	PrintPerson(result);
	return 0;
}
