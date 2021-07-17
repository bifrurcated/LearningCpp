#include <iostream>
#include <vector>

using namespace std;

/*
	Бибилиотека стандарных шаблонов (STL)
	Итераторы
*/

int IteratorVector()
{
	setlocale(LC_ALL, "RU");

	vector<int> myVector = { 1,234,5,63,1,3,4 };

	vector<int>::iterator it;
	it = myVector.begin();
	*it = 2;
	it++;
	it += 2;
	//it-=4; ошибка нельзя выходить за размер итератора (-1)
	cout << *(it + 2) << endl; // не всегда так можно сделать в других stl
	//для этого есть функция advance
	it = myVector.begin();
	advance(it, 4); //ищет элемент по индексу во втором параметре

	cout << *it << endl;



	//myVector.end() - итератор на пустой элемент конец вектора
	for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
	//для вектора лучше использовать [] для других stl iterator

	for (vector<int>::const_iterator it = myVector.cbegin(); it != myVector.cend(); it++)
	{
		//myVector.begin() находится после константного итератора в наследовании
		// cbegin() - константный итератор на первый элемент
		//*it = 2; нельзя менять константный итератор
		cout << *it << "\t";
	}
	cout << endl;

	//итератор от конца в начало
	for (vector<int>::reverse_iterator it = myVector.rbegin(); it != myVector.rend(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;

	/*--------------------------------------*/

	vector<int>::iterator iter = myVector.begin();
	iter += 2;
	myVector.insert(iter, 999);//добавляет туда куда указывает итератор

	cout << "insert" << endl;
	for (auto it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;

	iter = myVector.begin();
	myVector.erase(iter, iter + 3);//тот элемент на который указывает итератор будет удалён, второй параметр указывает до куда надо удалять элементы
	cout << "erase" << endl;
	for (auto it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;

	return 0;
}
