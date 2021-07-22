#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

/*
* Многопоточное программирование
* recursive_mutex
* рекурсивная блокировка
* защита разделяемых данных
* сихронизация потоков
*/

recursive_mutex rm;

void Foo(int a) {
	rm.lock();
	cout << a << " ";

	this_thread::sleep_for(chrono::milliseconds(200));

	if (a <= 1) {
		cout << endl;
		rm.unlock();
		return;
	}
	a--;
	Foo(a);
	rm.unlock();
}

int ThreadRecursiveMutex()
{
	setlocale(LC_ALL, "RU");
	//рекурсивный мютекс можно вызывать блокировку сколько угодно, но снятие блокировки должно быть таким же

	thread th1(Foo, 10);
	thread th2(Foo, 10);

	th1.join();
	th2.join();

	return 0;
}
