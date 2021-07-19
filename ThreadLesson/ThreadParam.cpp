#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

/*
* Многопоточное программирование
* Передача параметров в поток
*/


void DoWork(int a, int b, string msg) {
	cout << msg << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "====\t" << "DoWork STARTED\t====" << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "a+b = " << a + b << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "====\t" << "DoWork STOPPED\t====" << endl;
}

int ThreadParam()
{
	setlocale(LC_ALL, "RU");


	thread th(DoWork, 2, 3, "our message");//передаём параметры после названия функции

	for (size_t i = 0; true; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tmain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();

	return 0;
}
