#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#include <numeric> //��� ������ ���������

using namespace std;

/*
* ����������� ����������� �������� (STL)
* ���������
* ����� ���������
* ������������ ���������
* ����� ������ ���������
*/

int AlgoAccumulate()
{
	setlocale(LC_ALL, "RU");

	vector<int> vec = { 2,3,5 };

	auto result = accumulate(vec.begin(), vec.end(), 0); //���������� ����� ��������� �� ������ �������� 3-�� ���������, ��� �� 3 �������� �������� �� ��� ������������� ��������
	cout << "result = " << result << endl;

	int vec2[] = { 2,3,5,4,6,9 };
	//������ begin() � end() �������� � ������� ��������� ������ ��������� �� ������ � �����
	auto result2 = accumulate(begin(vec2), end(vec2), 0);
	cout << "result2 = " << result2 << endl;

	auto multiple = accumulate(begin(vec2), end(vec2), 1,
		[](int const& a, int const& b)
		{
			return a * b;
		}
	);
	cout << "multiple = " << multiple << endl;

	auto evenSum = accumulate(begin(vec2), end(vec2), 0,
		[](int const& a, int const& b)
		{
			return b % 2 == 0 ? a + b : a;
		}
	);
	cout << "evenSum = " << evenSum << endl;
	//����� next() ������� �������� �� ��������� ������� � ���������
	auto strSum = accumulate(next(begin(vec2)), end(vec2),
		to_string(vec2[0]),
		[](string const& a, int const& b)
		{
			return a + "-" + to_string(b);
		}
	);
	cout << "strSum = " << strSum << endl;

	return 0;
}
