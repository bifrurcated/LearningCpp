#include <iostream>
#include <thread>
#include <mutex>
#include "SimpleTimer.h"

using namespace std;

/*
* ������������� ����������������
* unique_lock
* ������ ����������� ������
* ������������ �������
*/

mutex mtxe;

void PrintUniquelock(char ch) {
	//����� �� ���������� lock() ������ ���������� ���� �������� std::defer_lock
	unique_lock<mutex> ul(mtxe, std::defer_lock);

	this_thread::sleep_for(chrono::milliseconds(2000));

	ul.lock(); //��������� �������� ���������� ������� ����������� ����������
	for (int i = 0; i < 5; ++i)
	{
		for (int i = 0; i < 10; i++) {
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(10));
		}
		cout << endl;
	}
	cout << endl;
	//ul.unlock();

	//this_thread::sleep_for(chrono::milliseconds(2000));
}

int ThreadUniqueLock()
{
	setlocale(LC_ALL, "RU");
	SimpleTimer st("main");

	thread th1(PrintUniquelock, '*');
	thread th2(PrintUniquelock, '-');

	th1.join();
	th2.join();

	return 0;
}
