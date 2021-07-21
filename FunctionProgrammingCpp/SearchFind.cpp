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
* std::find, std::find_if, std::find_if_not
*/



int SearchFind()
{
	setlocale(LC_ALL, "RU");
	vector<int> v = { 6,4,21,3,15,6,3,5 };

	auto result = find(v.begin(), v.end(), 3); //возвращает итератор
	if (result != v.end()) {
		cout << "Число найдено = " << *result << endl;
	}

	auto result2 = find_if(v.begin(), v.end(),
		[](auto a)->bool {
			return a > 0;
		}
	);
	if (result2 != v.end()) {
		cout << "Число найдено = " << *result2 << endl;
	}

	//инвертирует результат предиката
	auto result3 = find_if_not(v.begin(), v.end(),
		[](auto const& a)->bool {
			return a < 0;
		}
	);
	if (result3 != v.end()) {
		cout << "Число найдено = " << *result3 << endl;
	}

	vector<Person> people{
		Person("Вася", 181),
		Person("Петя", 30),
		Person("Маша", 179),
		Person("Даша", 200),
		Person("Катя", 198),
		Person("Андрей", 181),
		Person("Сергей", 50),
		Person("Иван", 150),
	};

	auto resultPeople = find_if(people.begin(), people.end(),
		[](auto const& p) {
			return p.score > 180 || p.name == "Катя";
		}
	);
	if (resultPeople != people.end()) {
		cout << "Результат name = " << (*resultPeople).name << endl;
		cout << "Результат score = " << (*resultPeople).score << endl;
	}
	return 0;
}
