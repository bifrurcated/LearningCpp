#include <iostream>
#include <vector>

using namespace std;

/*
	Ѕибилиотека стандарных шаблонов (STL)
	VECTOR
*/

int Vector()
{
	setlocale(LC_ALL, "RU");

	vector<int> myVector(5, 2);
	myVector.reserve(100);
	cout << "capacity вектора = " << myVector.capacity() << endl;
	cout << "Emptry() = " << myVector.empty() << endl; //пустой ли контейнер, 0 - не пустой, 1 - пустой
	myVector.push_back(12);
	myVector[0] = 1000;
	try
	{
		cout << myVector.at(4) << endl; //работает медленеее в отличие от [] из-за проверок
	}
	catch (const std::out_of_range& ex)
	{
		cout << ex.what() << endl;
	}

	cout << " оличество элементов в векторе = " << myVector.size() << endl;

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << "\t";
	}
	cout << endl;

	myVector.pop_back();

	cout << " оличество элементов в векторе = " << myVector.size() << endl;

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << "\t";
	}
	cout << endl;

	myVector.shrink_to_fit(); //”станавливает размер выделенной пам€ти под размер массива
	cout << "shrink_to_fit()" << endl;
	cout << " оличество элементов в векторе = " << myVector.size() << endl;
	cout << "capacity вектора = " << myVector.capacity() << endl;

	myVector.resize(20, 1); //”станавливает размер пам€ти и размер массива на одно и тоже значение, второй параметр каким числом заполнить данные
	cout << "resize()" << endl;
	cout << " оличество элементов в векторе = " << myVector.size() << endl;
	cout << "capacity вектора = " << myVector.capacity() << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << "\t";
	}
	cout << endl;
	return 0;
}
