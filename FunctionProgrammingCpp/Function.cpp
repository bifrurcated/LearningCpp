#include <iostream>
#include <functional>
#include <vector>

using namespace std;
/*
* std::function объект такого класса может хранить, копировать
* любой вызываемый объект, например, функцию, метод класса, лямбда-выражение
*/

void Foo(int const& a) {
	if (a > 10 && a < 40) {
		cout << "Foo\t" << a << endl;
	}
}

void Bar(int const& a) {
	if (a % 2 == 0) {
		cout << "Bar\t" << a << endl;
	}
}

void Baz(int a) {
	cout << "Baz\t" << a << endl;
}

void DoWork(vector<int> const& vc,
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

int Sum(int const& a, int const& b) {
	return a + b;
}

int Function()
{
	setlocale(LC_ALL, "RU");
	//для работы с функцией Foo надо для function указывать тот же возращаемый тип
	function<int(int, int)> func;
	func = Sum;
	cout << "sum = " << func(1, 2) << "\n\n";

	vector<int> vc = { 1,23,4,51,15,7,8,94,22,4 };
	vector<function<void(int)>> fv;
	fv.emplace_back(Foo);
	fv.emplace_back(Bar);
	fv.emplace_back(Baz);
	//добавили в вектор несколько функций одного типа
	DoWork(vc, fv);

	return 0;
}
