#include <iostream>
#include <thread>
#include <chrono> //���������� ��� ������ �� ��������

using namespace std;

/*
* ������������� ����������������
* ������
* thread
*/

void DoWork() {
	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID ������ = " << this_thread::get_id() << "\tDoWork\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(800));
	}
}

int Thread_1()
{
	setlocale(LC_ALL, "RU");

	thread th(DoWork);
	thread th2(DoWork);
	//th.detach();//����������� �������������� � ��������, ���� �������� �������� �����, ���� ��������� �������� �����, �� � ���� ����� ���������
	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID ������ = " << this_thread::get_id() << "\tmain\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();//��� ���������� ������ ������ th �� ���� �������, ���������� ���������� �������
	th2.join();
	return 0;
}
