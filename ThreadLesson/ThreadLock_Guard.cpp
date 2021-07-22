#include <iostream>
#include <thread>
#include <mutex>
#include "SimpleTimer.h"

using namespace std;

/*
* Многопоточное программирование
* lock_guard
* защита разделяемых данных
* синхронизация потоков
*/

mutex Mtx;

void PrintGuard(char ch) {
	//Чтобы не писать lock() и unlock() можно использовать lock_guard
	// И чтобы заблокировать всю функцию, пока не вызовется деструктор класса lock_guard
	this_thread::sleep_for(chrono::milliseconds(2000));
	//Чтобы снять блокировку дальше можно блокируемый код занести в фигурные скобки {}
	{
		lock_guard<mutex> guard(Mtx);
		for (int i = 0; i < 5; ++i)
		{
			for (int i = 0; i < 10; i++) {
				cout << ch;
				this_thread::sleep_for(chrono::milliseconds(20));
			}
			cout << endl;
		}
		cout << endl;
	} //здесь будет вызван деструктор lock_guard 
	this_thread::sleep_for(chrono::milliseconds(2000));
}

int ThreadLock_Guard()
{
	setlocale(LC_ALL, "RU");
	SimpleTimer st("main");
	thread th1(PrintGuard, '*');
	thread th2(PrintGuard, '&');
	thread th3(PrintGuard, '+');

	th1.join();
	th2.join();
	th3.join();

	return 0;
}
