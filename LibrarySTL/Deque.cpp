#include <iostream>
#include <deque>
#include <vector>

using namespace std;

/*
	����������� ����������� �������� (STL)
	deque (vector+���������� ������)
*/


int Deque()
{
	setlocale(LC_ALL, "RU");

	deque<int> dq = { 5,3,2,23 };
	//������ ����� �� ��� � list � vector
	cout << "size = " << dq.size() << endl;

	deque<int>::iterator it = dq.begin();
	//�������� ������������� �������
	it += 2;
	cout << *it << endl;

	return 0;
}
