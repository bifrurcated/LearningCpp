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

int SeacrhMinAndMinmax()
{
	setlocale(LC_ALL, "RU");

	vector<int> vec = { 10,1,-55,11,13,58 };

	auto minVec = min_element(vec.begin(), vec.end()); //���������� �������� �� ����������� �����
	cout << "maxVec = " << *minVec << endl;

	list<int> lst = { 4,7,77,-3,44,74 };
	auto minLst = min_element(lst.begin(), lst.end());
	cout << "maxLst = " << *minLst << endl;

	int const SIZE = 6;
	int arr[SIZE] = { 1,4,-10,321,512,4 };
	auto minArr = min_element(arr, arr + SIZE); //���������� ��������� �� ����������� �������
	cout << "maxArr = " << *minArr << endl;

	auto minMax = minmax_element(lst.begin(), lst.end()); //���������� ����, ��� ������ �������� ��� ����������� �������, � ������ ������������.
	cout << "min: " << *minMax.first << "\tmax: " << *minMax.second << endl;

	return 0;
}
