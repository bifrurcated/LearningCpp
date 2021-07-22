#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

/*
* ������������� ����������������
* recursive_mutex
* ����������� ����������
* ������ ����������� ������
* ������������ �������
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
	//����������� ������ ����� �������� ���������� ������� ������, �� ������ ���������� ������ ���� ����� ��

	thread th1(Foo, 10);
	thread th2(Foo, 10);

	th1.join();
	th2.join();

	return 0;
}
