#include <iostream>
#include <functional>
#include <vector>

using namespace std;
/*
* ������ �������
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
		return a + b; // ���������� ��� ������������ ���������� � ������ �������
	};

	auto q = retF(1, 3);

	int p = 0;
	//[] <- ����� ��� ���� ����� �� ��� ����������������� � ����������� �� ������
	auto f = [&p]()
	{
		p = 5;
	};
	f();

	vector<int> vc = { 1,23,4,51,15,7,8,94,22,4 };
	vector<function<void(int)>> funcVector;

	//������ �������
	funcVector.push_back(
		[](int a)
		{
			if (a % 2 == 0) {
				cout << "������\t" << a << endl;
			}
		}
	);
	DoWorkL(vc, funcVector);

	return 0;
}
