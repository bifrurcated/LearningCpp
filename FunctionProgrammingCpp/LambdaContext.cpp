#include <iostream>
#include <functional>
#include <vector>
#include "MyClass.h"

using namespace std;
/*
* ������ �������
* ������ ���������� � ��������
*/

void TestParamLambda() {
	int a = 55;
	int b = 10;

	auto f = [&a, b]()
	{
		//���� �� �� ��������� &, �� ���������� �� �� ����� ��������.
		cout << "a = " << a << endl;
		a = 4;
		cout << "b = " << b << endl;
		//b = 4; ������
	};
	f();

	auto f2 = [=]()
	{
		// ���� = ��������, ��� �� ����� ��������� ��� ����������, ������� ��������� � ���� �������, �� �������� �� �����.
		cout << "a2 = " << a << endl;
		cout << "b2 = " << b << endl;
	};
	f2();

	auto f3 = [&]()
	{
		// ���� & ��������, ��� �� ����� ��������� � �������� ��� �����������, ������� ��������� � ���� �������.
		a = a + 2;
		b = b + 2;
		cout << "a3 = " << a << endl;
		cout << "b3 = " << b << endl;
	};
	f3();

	auto f4 = [=]() mutable
	{
		// ����������� mutable ��������� ������ ������� ���������� ������ � ���� �������
		cout << "a4 = " << a << endl;
		a = 1245;
		cout << "b4 = " << b << endl;
		b = 215;
	};
	f4();

	auto f5 = [&a, b]() mutable
	{
		// &a ���������, � b �� ��������� �� ���� �������
		cout << "a5 = " << a << endl;
		a = 33;
		cout << "b5 = " << b << endl;
		b = 12;
	};
	f5();
}

int LambdaContext()
{
	setlocale(LC_ALL, "RU");

	MyClass m;
	m.lambda();

	TestParamLambda();

	auto f = []()->int //����� ������ ���������� ������������ ��� �����
	{
		return 156;
	};
	auto result = f();
	cout << "result = " << result << endl;

	return 0;
}
