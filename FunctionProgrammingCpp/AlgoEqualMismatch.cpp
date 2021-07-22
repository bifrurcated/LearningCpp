#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

/*
* ����������� ����������� �������� (STL)
* ���������
* �������� ��� ������������������
* equal � mismatch
*/

int AlgoEqualMismatch()
{
	setlocale(LC_ALL, "RU");

	int arr[] = { 10,3,15,4,9,8,6 };
	int arr2[] = { 10,3,15,4,9,8,6 };

	//������ � ������ ��������� ��� ������ � ����� �������, � ������ � �������� ������ � ����� ������� �������, � ������� �� ����� ������� ���������.
	//��� ������ ������ ������ ���� ���������� �������� ==
	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2));
	cout << "result = " << result << endl;


	vector<int> vec1 = { 10,3,15,4,9,8,6 };
	vector<int> vec2 = { 10,3,15,4,9,8,6,2 };
	bool resultVec = equal(begin(vec1), end(vec1), begin(vec2), end(vec2));
	cout << "resultVec = " << resultVec << endl;

	list<int> lst = { 10,3,15,4,9,8,6,2 };
	bool resultVecLst = equal(begin(vec2), end(vec2), begin(lst), end(lst));
	cout << "resultVecLst = " << resultVecLst << endl;

	//�������� equal ���������� �� ���������, ��� ��� ��� ��������� �� ����������� ��������� ����� ������������� ���������
	//� ������ ������� ��� ������� ����� ���������� �������� ���������, ������ ��� ��������� � ������ ��������
	vector<int> v1 = { 10,3,15,4,9,8,6 };
	vector<int> v2 = { 6,3,15,9,4,8,10 };
	sort(begin(v1), end(v1));
	sort(begin(v2), end(v2));
	bool resultSort = equal(begin(v1), end(v1), begin(v2), end(v2));
	cout << "resultSort = " << resultSort << endl;


	vector<int> ve1 = { 10,3,15,4,9,8,6 };
	vector<int> ve2 = { 6,3,15,9,4,8,10 };
	//���������� ������ ���� ���������������� ���������
	//���� ��� �����, �� first ����� ��������� �� ����� ������ ���������
	// � second �� ����� ������ ���������
	auto res = mismatch(begin(ve1), end(ve1), begin(ve2), end(ve2));

	if (res.first != end(ve1) && res.second != end(ve2)) {
		cout << "res.first = " << *res.first << endl;
		cout << "res.second = " << *res.second << endl;
	}
	else { cout << "ve1 == ve2" << endl; }

	return 0;
}
