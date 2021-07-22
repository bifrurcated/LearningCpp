#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#include <numeric> //Для работы алгоритма

using namespace std;

/*
* Бибилиотека стандартных шаблонов (STL)
* Алгоритмы
* Сумма элементов
* Произведение элементов
* Сумма чётных элементов
*/

int AlgoAccumulate()
{
	setlocale(LC_ALL, "RU");

	vector<int> vec = { 2,3,5 };

	auto result = accumulate(vec.begin(), vec.end(), 0); //возвращает сумму элементов от начала значения 3-го параметра, так же 3 параметр отвечает за тип возвращаемого значения
	cout << "result = " << result << endl;

	int vec2[] = { 2,3,5,4,6,9 };
	//Методы begin() и end() работают с разными массивами данных определяя их начало и конец
	auto result2 = accumulate(begin(vec2), end(vec2), 0);
	cout << "result2 = " << result2 << endl;

	auto multiple = accumulate(begin(vec2), end(vec2), 1,
		[](int const& a, int const& b)
		{
			return a * b;
		}
	);
	cout << "multiple = " << multiple << endl;

	auto evenSum = accumulate(begin(vec2), end(vec2), 0,
		[](int const& a, int const& b)
		{
			return b % 2 == 0 ? a + b : a;
		}
	);
	cout << "evenSum = " << evenSum << endl;
	//метод next() смещает итератор на следущщий элемент в коллекции
	auto strSum = accumulate(next(begin(vec2)), end(vec2),
		to_string(vec2[0]),
		[](string const& a, int const& b)
		{
			return a + "-" + to_string(b);
		}
	);
	cout << "strSum = " << strSum << endl;

	return 0;
}
