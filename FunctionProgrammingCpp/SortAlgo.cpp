#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Person.h"

using namespace std;

/*
* Бибилиотека стандартных шаблонов (STL)
* Алгоритмы
* SORT
*/

template <typename T>
void PrintBasic(T const& a) {
	for (auto const& i : a)
	{
		cout << i << "\t";
	}
	cout << endl;
}

bool GreateThanZero1(int value) {
	return value > 0;
} //Это унарные предикат, потому что принимает одно значение


int SortAlgo()
{
	setlocale(LC_ALL, "RU");

	const int SIZE = 7;
	int arr[SIZE] = { 1,3,55,123,5,8,0 };
	PrintBasic(arr);
	sort(arr, arr + SIZE, [](int a, int b) {return a > b; });
	PrintBasic(arr);

	vector<int> v = { 9,5,3,7,88,532,5,672 };
	PrintBasic(v);
	sort(v.begin(), v.end(),
		[](int const& a, int const& b)->bool {
			return a > b;
		}
	);
	PrintBasic(v);

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
	//вызывает по умолчанию переопределённый метод сравнения
	sort(people.begin(), people.end(), [](Person const& p1, Person const& p2)
		{
			return p1.score < p2.score;
		}
	);

	for (auto const& el : people) {
		cout << "Имя:\t" << el.name << "\tбаллы:\t" << el.score << endl;
	}

	return 0;
}
