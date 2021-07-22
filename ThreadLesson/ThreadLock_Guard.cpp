#include <iostream>
#include <thread>
#include <mutex>
#include "SimpleTimer.h"

using namespace std;

/*
* ������������� ����������������
* lock_guard
* ������ ����������� ������
* ������������� �������
*/

mutex Mtx;

void PrintGuard(char ch) {
	//����� �� ������ lock() � unlock() ����� ������������ lock_guard
	// � ����� ������������� ��� �������, ���� �� ��������� ���������� ������ lock_guard
	this_thread::sleep_for(chrono::milliseconds(2000));
	//����� ����� ���������� ������ ����� ����������� ��� ������� � �������� ������ {}
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
	} //����� ����� ������ ���������� lock_guard 
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
