#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Person.h"

using namespace std;

/*
* ����������� ����������� �������� (STL)
* ���������
* �����
* std::copy, std::copy_if
*/

template<typename T>
void PrintPerson(T const& t) {
	for (auto const& el : t) {
		cout << "���:\t" << el.name << "\t�����:\t" << el.score << "\t�������:\t" << el.age << endl;
	}
	cout << endl;
}

int SearchCopy()
{
	setlocale(LC_ALL, "RU");

	vector<Person> people{
		Person("����", 181, 17),
		Person("����", 30, 20),
		Person("����", 179, 31),
		Person("����", 200, 19),
		Person("����", 198, 16),
		Person("������", 181, 21),
		Person("������", 50, 20),
		Person("����", 150, 32),
	};

	vector<Person> result;
	// back_inserter �������� ��� �������� ���������� � ������ ���������
	//copy(people.begin(), people.end(), back_inserter(result));
	copy_if(people.begin(), people.end(), back_inserter(result),
		[](Person const& p)
		{
			return p.age >= 18;
		}
	);
	PrintPerson(result);

	sort(result.begin(), result.end(),
		[](Person const& p1, Person const& p2)
		{
			return p1.age < p2.age;
		}
	);
	PrintPerson(result);
	return 0;
}
