#include <iostream>
#include <vector>

using namespace std;

/*
	Ключевое слово auto
*/

int Auto()
{
	setlocale(LC_ALL, "RU");

	auto a = 10;
	auto str = "strong";
	//auto p; - обязательна инициализация переменной

	cout << a << endl;
	cout << str << endl;

	vector<int> myVector = { 11,42,23 };
	vector<int>::iterator it = myVector.begin();

	auto it2 = myVector.begin(); //автоматически определяет итератор
	// сокращает запись кода
	// std::vector<int>::iterator
	for (auto it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
	return 0;
}
