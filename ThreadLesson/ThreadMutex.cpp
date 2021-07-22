#include <iostream>
#include <thread>
#include <mutex>
#include <list>
#include "SimpleTimer.h"

using namespace std;

/*
* Многопоточное программирование
* mutex
* защита разделяемых данных
* синхронизация потоков
*/

mutex mtx; //ставит блокировку на участок кода, который доступен только одному потоку

void Print(char ch) {
	this_thread::sleep_for(chrono::milliseconds(2000));

	mtx.lock();
	for (int i = 0; i < 5; ++i)
	{
		for (int i = 0; i < 10; i++) {
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(20));
		}
		cout << endl;
	}
	cout << endl;
	mtx.unlock();

	this_thread::sleep_for(chrono::milliseconds(2000));
}

int ThreadMutex()
{
	setlocale(LC_ALL, "RU");
	SimpleTimer st("main");
	thread th1(Print, '*');
	thread th2(Print, '#');
	thread th3(Print, '@');
	//Print('*');
	//Print('#');
	th1.join();
	th2.join();
	th3.join();

	return 0;
}
