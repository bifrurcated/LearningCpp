#include <iostream>
#include <array>

using namespace std;

/*
	Бибилиотека стандартных шаблонов (STL)
	array
*/
template <typename T>
void PrintArray(array<T, 4> const& arr) {
	for (auto& i : arr)
	{
		cout << i << "\t";
	}
	cout << endl;
}

int Array()
{
	setlocale(LC_ALL, "RU");

	array<int, 4> arr = { 1,2,3,4 };

	try {
		cout << arr.at(4) << endl;
	}
	catch (const std::exception& ex) {
		cout << ex.what() << endl;
	}

	for (auto& i : arr)
	{
		cout << i << "\t";
	}
	cout << endl;

	arr.fill(9);
	PrintArray(arr);

	cout << "front = " << arr.front() << endl; // первый элемент массива
	cout << "back = " << arr.back() << endl;	// последний элемент массива

	return 0;
}
