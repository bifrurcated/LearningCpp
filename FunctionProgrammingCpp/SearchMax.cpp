#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include "Person.h"

using namespace std;

/*
* Бибилиотека стандартных шаблонов (STL)
* Алгоритмы
* поиск наибольшего элемента
*/

int SearchMax()
{
	setlocale(LC_ALL, "RU");

	vector<int> vec = { 10,1,-55,11,13,58 };

	auto maxVec = max_element(vec.begin(), vec.end()); //возвращает итератор на максимальное число
	cout << "maxVec = " << *maxVec << endl;

	list<int> lst = { 4,7,77,-3,44,74 };
	auto maxLst = max_element(lst.begin(), lst.end());
	cout << "maxLst = " << *maxLst << endl;

	int const SIZE = 6;
	int arr[SIZE] = { 1,4,-10,321,512,4 };
	auto maxArr = max_element(arr, arr + SIZE); //возвращает указатель на максимальный элемент
	cout << "maxArr = " << *maxArr << endl;


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
	auto maxScore = max_element(people.begin(), people.end(),
		[](Person const& p1, Person const& p2)
		{
			return p1.score < p2.score&& p1.age > p2.age;
		}
	);
	cout << "Имя: " << maxScore->name << "\tбаллы: " << maxScore->score << "\tвозраст: " << maxScore->age << endl;
	return 0;
}
