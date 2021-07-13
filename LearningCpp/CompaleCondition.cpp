#include <iostream>
#define DEBUG 1
#define COUT
#define ASD
using namespace std;

/*
Условная компиляция
*/

#ifndef HEADER_H_     // equivalently, #if !defined HEADER_H_
#define HEADER_H_
// Код, размещенный здесь, включается только один раз на единицу перевода
#endif // HEADER_H_

//Тоже самое что и выше делает команда #pragma once после которой код включается один раз

int CompileCondition()
{
	setlocale(LC_ALL, "RU");

#ifndef COUT
#error COUT on.
#endif

#ifndef COUT //if not define
	cout << "cout 1" << endl;
#endif
#
#undef ASD // отменяет директиву определённой #define
#ifdef ASD //if define
	cout << "cout 1" << endl;
#endif

#if DEBUG == 1
	cout << "начало цикла" << endl;
#endif // DEBUG

	for (int i = 0; i < 4; i++)
	{
		cout << i << endl;
	}

#if DEBUG == 1
	cout << "конец цикла" << endl;
#endif // DEBUG

	return 0;
}