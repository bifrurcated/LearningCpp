#include <iostream>
#include <thread>
#include <chrono> //библиотека для работы со временем

using namespace std;

/*
* Многопоточное программирование
* потоки
* thread
*/

void DoWork() {
	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tDoWork\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(800));
	}
}

int Thread_1()
{
	setlocale(LC_ALL, "RU");

	thread th(DoWork);
	thread th2(DoWork);
	//th.detach();//Выполняется самостоятельно и работает, пока работает основной поток, Если закроется основной поток, то и этот поток закроется
	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tmain\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();//ждём завершения работы потока th до этой строчки, происходит блокировка потоков
	th2.join();
	return 0;
}
