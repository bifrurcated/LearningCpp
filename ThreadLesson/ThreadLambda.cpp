#include <iostream>
#include <thread>
#include <chrono>
#include <functional>

using namespace std;

/*
* Многопоточное программирование
* Получение результатов работы функции из потоков
*/

int Sum(int const& a, int const& b) {
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "====\t" << "DoWork STARTED\t====" << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));
	cout << "====\t" << "DoWork STOPPED\t====" << endl;
	return a + b;
}

int Threadlambda()
{
	setlocale(LC_ALL, "RU");

	int result = 0;

	auto f = [&result]() {
		result = Sum(2, 5);
	};

	thread th(f);


	for (size_t i = 0; i <= 10; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tmain work\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();
	cout << "Sum result = " << result << endl;

	return 0;
}
