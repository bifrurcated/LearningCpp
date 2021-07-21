#include <iostream>
#include <algorithm>
#include <vector>
#include "Person.h"

using namespace std;

/*
* ���������
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
	//������� ��� �������� ��������� 1 �������� ������ ����������, 2 �������� ����� ��������� � 3 �������� ��������
	int c = count_if(vec.begin(), vec.end(), GreaterThanZero);
	cout << "����� ������ ���� = " << c << endl;
	c = count_if(vec.begin(), vec.end(), LessThanZero);
	cout << "����� ������ ���� = " << c << endl;

	vector<Person> people{
		Person("����", 181),
		Person("����", 30),
		Person("����", 179),
		Person("����", 200),
		Person("����", 198),
		Person("������", 181),
		Person("������", 50),
		Person("����", 150),
	};

	int result = count_if(people.begin(), people.end(), people.front());
	cout << "����������� � ������� ������ ������ 180 = " << result << endl;
	return 0;
}
