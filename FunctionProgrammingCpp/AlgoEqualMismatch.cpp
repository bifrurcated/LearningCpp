#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

/*
* Бибилиотека стандартных шаблонов (STL)
* Алгоритмы
* Сравнить две последовательности
* equal и mismatch
*/

int AlgoEqualMismatch()
{
	setlocale(LC_ALL, "RU");

	int arr[] = { 10,3,15,4,9,8,6 };
	int arr2[] = { 10,3,15,4,9,8,6 };

	//Первый и второй параметры эот начало и конец массива, а третий и четвёртый начало и конец второго массива, с которым мы хотим сделать сравнение.
	//Для своего класса должен быть перегружен оператор ==
	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2));
	cout << "result = " << result << endl;


	vector<int> vec1 = { 10,3,15,4,9,8,6 };
	vector<int> vec2 = { 10,3,15,4,9,8,6,2 };
	bool resultVec = equal(begin(vec1), end(vec1), begin(vec2), end(vec2));
	cout << "resultVec = " << resultVec << endl;

	list<int> lst = { 10,3,15,4,9,8,6,2 };
	bool resultVecLst = equal(begin(vec2), end(vec2), begin(lst), end(lst));
	cout << "resultVecLst = " << resultVecLst << endl;

	//Алгоритм equal сравнивает по элементно, так что для сравнения на соотвествие элементов нужно отсортировать коллекции
	//В данном примере два вектора имеют одинаковые значения элементов, только они находятся в разных индексах
	vector<int> v1 = { 10,3,15,4,9,8,6 };
	vector<int> v2 = { 6,3,15,9,4,8,10 };
	sort(begin(v1), end(v1));
	sort(begin(v2), end(v2));
	bool resultSort = equal(begin(v1), end(v1), begin(v2), end(v2));
	cout << "resultSort = " << resultSort << endl;


	vector<int> ve1 = { 10,3,15,4,9,8,6 };
	vector<int> ve2 = { 6,3,15,9,4,8,10 };
	//Возвращает первую пару несоответсвующих элементов
	//Если они равны, то first будет указывать на конец первой коллекции
	// а second на конец второй коллекции
	auto res = mismatch(begin(ve1), end(ve1), begin(ve2), end(ve2));

	if (res.first != end(ve1) && res.second != end(ve2)) {
		cout << "res.first = " << *res.first << endl;
		cout << "res.second = " << *res.second << endl;
	}
	else { cout << "ve1 == ve2" << endl; }

	return 0;
}
