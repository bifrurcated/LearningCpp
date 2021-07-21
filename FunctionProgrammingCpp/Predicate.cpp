#include <iostream>
#include <algorithm>
#include <vector>
#include "Person.h"

using namespace std;

/*
* ПРЕДИКАТЫ
*/

bool GreaterThanZero(int value) {
	return value > 0;
}

bool LessThanZero(int value) {
	return value < 0;
}

int Predicate()
{
	setlocale(LC_ALL, "RU");
	cout << GreaterThanZero(-10) << endl;

	vector<int> vec = { 1,-2,3,12,-100,0,4 };
	//функция для перебора коллекции 1 параметр начало колллекции, 2 параметр конец коллекции и 3 параметр предикат
	int c = count_if(vec.begin(), vec.end(), GreaterThanZero);
	cout << "Чисел больше нуля = " << c << endl;
	c = count_if(vec.begin(), vec.end(), LessThanZero);
	cout << "Чисел меньше нуля = " << c << endl;

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

	int result = count_if(people.begin(), people.end(), people.front());
	cout << "Поступающие у которых баллов больше 180 = " << result << endl;
	return 0;
}
