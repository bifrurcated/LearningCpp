#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Person.h"

using namespace std;

/*
* ����������� ����������� �������� (STL)
* ���������
* �������� ��������
* std::remove, std::remove_if
*/

template<typename T>
void PrintPersonD(T const& t) {
	for (auto const& el : t) {
		cout << "���:\t" << el.name << "\t�����:\t" << el.score << "\t�������:\t" << el.age << endl;
	}
	cout << endl;
}

template<typename T>
void PrintVec(T const& t) {
	for (auto const& el : t) {
		cout << el << "\t";
	}
	cout << endl;
}

int SearchRemove()
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
	PrintPersonD(people);
	/*auto res = remove_if(people.begin(), people.end(),
		[](Person const& p1)
		{
			return p1.age < 18;
		}
	);
	people.erase(res, people.end());*/
	//��� ������������� ����������
	people.erase(remove_if(people.begin(), people.end(),
		[](Person const& p)
		{
			return p.age < 18 || p.score < 180;
		}
	), people.end());
	PrintPersonD(people);

	vector<int> vec = { 5,9,1,46,4,9,4 };

	PrintVec(vec);
	//������� remove ���������� ��� �������� �������� � ����� ������
	//� ���������� �������� �� ������ �������� �������
	//������� �� ����� � ������� ������ ����� ��������� erase
	auto result = remove(vec.begin(), vec.end(), 4);
	PrintVec(vec);
	vec.erase(result, vec.end());
	PrintVec(vec);

	string str = "����� � �����������   ���������  ";
	cout << str << endl;
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	cout << str << endl;

	return 0;
}
