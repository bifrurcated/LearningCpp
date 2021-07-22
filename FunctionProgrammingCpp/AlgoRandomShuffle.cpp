#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include "CatAction.h"
#include "DogAction.h"
#include "TeaAction.h"
#include "SleepAction.h"
#include "IAction.h"

using namespace std;

/*
* Бибилиотека стандартных шаблонов (STL)
* Алгоритмы
* Сортировка массива в случайном порядке
* std::random_shuffel
*/

template<typename T>
void PrintMass(T const& t) {
	for (auto& el : t)
	{
		cout << el << "\t";
	}
	cout << endl;
}

int RandomShuffle()
{
	setlocale(LC_ALL, "RU");

	int arr[] = { 1,2,3,4,5 };
	srand((unsigned)time(0));
	random_shuffle(begin(arr), end(arr));
	PrintMass(arr);
	CatAction ca;

	IAction* iA[] =
	{
		new CatAction(),
		new DogAction(),
		new SleepAction(),
		new TeaAction()
	};

	random_shuffle(begin(iA), end(iA));

	for (auto const& el : iA)
	{
		el->Action();
	}

	return 0;
}
