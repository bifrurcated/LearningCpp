#include <iostream>
#include <array>

using namespace std;

/*
	����������� ����������� �������� (STL)
	���������� ��������� ���������
*/
template <typename T>
void PrintArray(array<T, 4> const& arr) {
	for (auto& i : arr)
	{
		cout << i << "\t";
	}
	cout << endl;
}

int OperatorEqual()
{
	setlocale(LC_ALL, "RU");

	//���� � ������� ���� �������� ����� �� ��� ��������� ��� ������ ���� �������� ��������� ���������
	array<int, 4> arr = { 1,2,3,4 };
	array<int, 4> arr2 = { 1,2,3,5 };

	bool result = (arr == arr2);
	cout << "arr == arr2 " << (result ? "true" : "false") << endl;

	result = (arr < arr2);
	cout << "arr < arr2 " << (result ? "true" : "false") << endl;

	return 0;
}
