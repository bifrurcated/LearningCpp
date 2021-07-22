#include <iostream>
#include <thread>
#include <mutex>
#include "SimpleTimer.h"

using namespace std;

/*
* Многопоточное программирование
* Взаимная блокировка или Deadlock
* защита разделяемых данных
* синхронизация потоков
*/

mutex mtx1;
mutex mtx2;

void PrintDeadlock() {
	//нужно соблюдаь порядок вызова mutex!
	mtx1.lock();

	this_thread::sleep_for(chrono::milliseconds(100));

	mtx2.lock();

	for (int i = 0; i < 5; ++i)
	{
		for (int i = 0; i < 10; i++) {
			cout << "*";
			this_thread::sleep_for(chrono::milliseconds(10));
		}
		cout << endl;
	}
	cout << endl;

	mtx1.unlock();

	mtx2.unlock();
}

void PrintDeadlock2() {
	mtx1.lock();

	this_thread::sleep_for(chrono::milliseconds(100));

	mtx2.lock();

	for (int i = 0; i < 5; ++i)
	{
		for (int i = 0; i < 10; i++) {
			cout << "#";
			this_thread::sleep_for(chrono::milliseconds(10));
		}
		cout << endl;
	}
	cout << endl;

	mtx1.unlock();

	mtx2.unlock();
}

int ThreadMutexDeadlock()
{
	setlocale(LC_ALL, "RU");

	SimpleTimer st("main");

	thread th1(PrintDeadlock);
	thread th2(PrintDeadlock2);

	th1.join();
	th2.join();

	return 0;
}
