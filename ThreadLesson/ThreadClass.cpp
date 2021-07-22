#include <iostream>
#include <thread>
#include "MyClass.h"

using namespace std;

/*
* Многопоточное программирование
* Запуск метода класса в отдельном потоке
*/


int ThreadClass()
{
	setlocale(LC_ALL, "RU");

	MyClass mc;
	int result = 0;

	thread th([&]() { result = mc.Sum(1, 2); });
	thread th2(&MyClass::DoWork, mc);
	thread th3(&MyClass::DoWork2, mc, 5);

	for (size_t i = 1; i <= 10; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tmain work\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();
	th2.join();
	th3.join();
	cout << "sum = " << result << endl;
	return 0;
}
