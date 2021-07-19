#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

/*
* ������������� ����������������
* ��������� ����������� ������ ������� �� ������
*/

void DoWork(int& a) {
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "====\t" << "DoWork STARTED\t====" << endl;
	this_thread::sleep_for(chrono::milliseconds(4000));

	a *= 2;

	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "====\t" << "DoWork STOPPED\t====" << endl;
}

int ThreadReturnRef()
{
	setlocale(LC_ALL, "RU");
	int result = 5;
	//std::ref ������ ����� ��� �������� ������, ����� �������� �������� �� ������
	thread th(DoWork, std::ref(result));

	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID ������ = " << this_thread::get_id() << "\tmain work\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	//th.detach();//�� ��� �����
	th.join();//��� ���� ���������� �����
	cout << result << endl;

	return 0;
}
