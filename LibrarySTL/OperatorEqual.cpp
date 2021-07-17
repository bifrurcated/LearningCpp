#include <iostream>
#include <array>

using namespace std;

/*
	Ѕибилиотека стандартных шаблонов (STL)
	ѕерегрузка оператора сравнени€
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

	//≈сли в качесве типа вставить класс то дл€ сравнени€ там должен быть определЄн операторы сравнени€
	array<int, 4> arr = { 1,2,3,4 };
	array<int, 4> arr2 = { 1,2,3,5 };

	bool result = (arr == arr2);
	cout << "arr == arr2 " << (result ? "true" : "false") << endl;

	result = (arr < arr2);
	cout << "arr < arr2 " << (result ? "true" : "false") << endl;

	return 0;
}
