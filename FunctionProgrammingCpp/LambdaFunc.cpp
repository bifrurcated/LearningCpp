#include <iostream>
#include <functional>
#include <vector>

using namespace std;
/*
* Лямбда функции
*/

void FooL(int const& a) {
	if (a > 10 && a < 40) {
		cout << "Foo\t" << a << endl;
	}
}

void BarL(int const& a) {
	if (a % 2 == 0) {
		cout << "Bar\t" << a << endl;
	}
}

void BazL(int a) {
	cout << "Baz\t" << a << endl;
}

void DoWorkL(vector<int> const& vc,
	vector<function<void(int)>> const& funcVector)
{
	for (auto const& el : vc)
	{
		for (auto const& fv : funcVector)
		{
			fv(el);
		}
	}
}

int LambdaFunc()
{
	setlocale(LC_ALL, "RU");

	auto retF = [](int a, int b) {
		return a + b; // определяет тип возвращаемой переменной в лямбда функции
	};

	auto q = retF(1, 3);

	int p = 0;
	//[] <- нужны для того чтобы из вне взаимодействовать с переменными по ссылке
	auto f = [&p]()
	{
		p = 5;
	};
	f();

	vector<int> vc = { 1,23,4,51,15,7,8,94,22,4 };
	vector<function<void(int)>> funcVector;

	//лямюда функция
	funcVector.push_back(
		[](int a)
		{
			if (a % 2 == 0) {
				cout << "Лямюда\t" << a << endl;
			}
		}
	);
	DoWorkL(vc, funcVector);

	return 0;
}
