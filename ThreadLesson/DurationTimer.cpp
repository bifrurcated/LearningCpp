#include <iostream>
#include <thread>
#include "SimpleTimer.h"

using namespace std;

/*
* Время выполнения участка кода
*/

int Sum(int a, int b) {
	SimpleTimer st("Sum");
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "====\t" << "DoWork STARTED\t====" << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));
	cout << "====\t" << "DoWork STOPPED\t====" << endl;
	return a + b;
}

void Loop() {
	SimpleTimer st("Loop");
	int test = 0;
	for (size_t i = 0; i < 50000; ++i)
	{
		++test;
	}
}

int DurationTimer()
{
	SimpleTimer st("main");

	Loop();

	setlocale(LC_ALL, "RU");

	int result = 0;
	thread th([&result]() {result = Sum(22, 15); });

	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tmain work\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();
	cout << "Sum result = " << result << endl;

	return 0;
}
