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
* std::find, std::find_if, std::find_if_not
*/



int SearchFind()
{
	setlocale(LC_ALL, "RU");
	vector<int> v = { 6,4,21,3,15,6,3,5 };

	auto result = find(v.begin(), v.end(), 3); //���������� ��������
	if (result != v.end()) {
		cout << "����� ������� = " << *result << endl;
	}

	auto result2 = find_if(v.begin(), v.end(),
		[](auto a)->bool {
			return a > 0;
		}
	);
	if (result2 != v.end()) {
		cout << "����� ������� = " << *result2 << endl;
	}

	//����������� ��������� ���������
	auto result3 = find_if_not(v.begin(), v.end(),
		[](auto const& a)->bool {
			return a < 0;
		}
	);
	if (result3 != v.end()) {
		cout << "����� ������� = " << *result3 << endl;
	}

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

	auto resultPeople = find_if(people.begin(), people.end(),
		[](auto const& p) {
			return p.score > 180 || p.name == "����";
		}
	);
	if (resultPeople != people.end()) {
		cout << "��������� name = " << (*resultPeople).name << endl;
		cout << "��������� score = " << (*resultPeople).score << endl;
	}
	return 0;
}
