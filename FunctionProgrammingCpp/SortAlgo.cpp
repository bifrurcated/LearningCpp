#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Person.h"

using namespace std;

/*
* ����������� ����������� �������� (STL)
* ���������
* SORT
*/

template <typename T>
void PrintBasic(T const& a) {
	for (auto const& i : a)
	{
		cout << i << "\t";
	}
	cout << endl;
}

bool GreateThanZero1(int value) {
	return value > 0;
} //��� ������� ��������, ������ ��� ��������� ���� ��������


int SortAlgo()
{
	setlocale(LC_ALL, "RU");

	const int SIZE = 7;
	int arr[SIZE] = { 1,3,55,123,5,8,0 };
	PrintBasic(arr);
	sort(arr, arr + SIZE, [](int a, int b) {return a > b; });
	PrintBasic(arr);

	vector<int> v = { 9,5,3,7,88,532,5,672 };
	PrintBasic(v);
	sort(v.begin(), v.end(),
		[](int const& a, int const& b)->bool {
			return a > b;
		}
	);
	PrintBasic(v);

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
	//�������� �� ��������� ��������������� ����� ���������
	sort(people.begin(), people.end(), [](Person const& p1, Person const& p2)
		{
			return p1.score < p2.score;
		}
	);

	for (auto const& el : people) {
		cout << "���:\t" << el.name << "\t�����:\t" << el.score << endl;
	}

	return 0;
}
