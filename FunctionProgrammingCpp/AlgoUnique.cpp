#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

/*
* ����������� ����������� �������� (STL)
* ���������
* ������� ������������� �������
* std::unique, std::unique_copy
*/

template<typename T>
void PrintArr(T const& t) {
	for (auto& el : t)
	{
		cout << el << "\t";
	}
	cout << endl;
}

int AlgoUnique()
{
	setlocale(LC_ALL, "RU");

	vector<int> arr = { 0,1,2,2,22,2,5,6,6,6,7,8,9,0,0 };
	//unique ��������� ������ ����������, ���������� ������������� � �����
	//���� ����������� ������� ���� � ���������������
	auto result = unique(begin(arr), end(arr));

	for_each(begin(arr), result, [](int const& a)
		{ cout << a << "\t"; }
	);
	cout << endl;
	arr.erase(result, arr.end());
	PrintArr(arr);
	arr.push_back(1);
	arr.push_back(1);
	arr.push_back(1);
	PrintArr(arr);
	vector<int> vec2;
	//�������� � ������ ������ �� ������������� ��������
	unique_copy(begin(arr), end(arr), back_inserter(vec2));

	PrintArr(vec2);
	return 0;
}
