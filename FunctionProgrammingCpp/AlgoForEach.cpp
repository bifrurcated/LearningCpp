#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

/*
* ����������� ����������� �������� (STL)
* ���������
* for_each
*/

void Body(int const& a) {
	cout << a << "\t";
}

int AlgoForEach()
{
	setlocale(LC_ALL, "RU");

	int arr[] = { 1, 2, 3,15,23,9,0 };
	//������ �������� ��� ������� ������� ���������� ��� ������ � ������������� �����������
	for_each(begin(arr), end(arr), Body);
	cout << endl;

	for_each(begin(arr), end(arr), [](int const& a)
		{
			cout << a << "\t";
		}
	);
	cout << endl;

	for (auto const& a : arr)
	{
		Body(a);
	}
	cout << endl;

	return 0;
}
