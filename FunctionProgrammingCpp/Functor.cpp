#include <iostream>
#include "MyFunctor.h"
#include "EvenFunctor.h"

using namespace std;

/*
* ФУНКТОРЫ переопределение ()
*/


int Functor()
{
	setlocale(LC_ALL, "RU");

	MyFunctor mf;
	int result = mf(2, 3);
	cout << "result = " << result << endl;

	int arr[] = { 1,2,44,12,4,6,8,4 };
	EvenFunctor ef;
	for (auto& el : arr)
	{
		ef(el);
	}
	ef.ShowEvenCount();
	ef.ShowEvenSum();

	return 0;
}
