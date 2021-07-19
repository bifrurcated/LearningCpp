#include <iostream>


using namespace std;

/*
* union по функционалу такие же как и структуры
* хранит все данные в одной области памяти
*/

union MyUnion {
	//выделяет память для самого большого типа в памяти
	MyUnion() {
		a = 0;
		b = 0;
		c = 0;
	}
	short int a;
	int b;
	float c;
};


int Union()
{
	setlocale(LC_ALL, "RU");

	MyUnion un;
	//можно хранить данные только для одного из поля
	un.a = 1;
	cout << un.a << "\t" << un.b << "\t" << un.c << endl;
	un.b = 30000;
	cout << un.a << "\t" << un.b << "\t" << un.c << endl;
	un.c = 2.5f;
	cout << un.a << "\t" << un.b << "\t" << un.c << endl;

	cout << sizeof(un.a) << endl;
	cout << sizeof(un.b) << endl;
	cout << sizeof(un.c) << endl;

	return 0;
}
