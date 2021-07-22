#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include "Person.h"

using namespace std;

/*
* ����������� ����������� �������� (STL)
* ���������
* ����� ����������� ��������
*/

int SearchMax()
{
	setlocale(LC_ALL, "RU");

	vector<int> vec = { 10,1,-55,11,13,58 };

	auto maxVec = max_element(vec.begin(), vec.end()); //���������� �������� �� ������������ �����
	cout << "maxVec = " << *maxVec << endl;

	list<int> lst = { 4,7,77,-3,44,74 };
	auto maxLst = max_element(lst.begin(), lst.end());
	cout << "maxLst = " << *maxLst << endl;

	int const SIZE = 6;
	int arr[SIZE] = { 1,4,-10,321,512,4 };
	auto maxArr = max_element(arr, arr + SIZE); //���������� ��������� �� ������������ �������
	cout << "maxArr = " << *maxArr << endl;


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
	auto maxScore = max_element(people.begin(), people.end(),
		[](Person const& p1, Person const& p2)
		{
			return p1.score < p2.score&& p1.age > p2.age;
		}
	);
	cout << "���: " << maxScore->name << "\t�����: " << maxScore->score << "\t�������: " << maxScore->age << endl;
	return 0;
}
