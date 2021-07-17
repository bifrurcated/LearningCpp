#include <iostream>
#include <vector>

using namespace std;

/*
	����������� ���������� �������� (STL)
	���������
*/

int IteratorVector()
{
	setlocale(LC_ALL, "RU");

	vector<int> myVector = { 1,234,5,63,1,3,4 };

	vector<int>::iterator it;
	it = myVector.begin();
	*it = 2;
	it++;
	it += 2;
	//it-=4; ������ ������ �������� �� ������ ��������� (-1)
	cout << *(it + 2) << endl; // �� ������ ��� ����� ������� � ������ stl
	//��� ����� ���� ������� advance
	it = myVector.begin();
	advance(it, 4); //���� ������� �� ������� �� ������ ���������

	cout << *it << endl;



	//myVector.end() - �������� �� ������ ������� ����� �������
	for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
	//��� ������� ����� ������������ [] ��� ������ stl iterator

	for (vector<int>::const_iterator it = myVector.cbegin(); it != myVector.cend(); it++)
	{
		//myVector.begin() ��������� ����� ������������ ��������� � ������������
		// cbegin() - ����������� �������� �� ������ �������
		//*it = 2; ������ ������ ����������� ��������
		cout << *it << "\t";
	}
	cout << endl;

	//�������� �� ����� � ������
	for (vector<int>::reverse_iterator it = myVector.rbegin(); it != myVector.rend(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;

	/*--------------------------------------*/

	vector<int>::iterator iter = myVector.begin();
	iter += 2;
	myVector.insert(iter, 999);//��������� ���� ���� ��������� ��������

	cout << "insert" << endl;
	for (auto it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;

	iter = myVector.begin();
	myVector.erase(iter, iter + 3);//��� ������� �� ������� ��������� �������� ����� �����, ������ �������� ��������� �� ���� ���� ������� ��������
	cout << "erase" << endl;
	for (auto it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;

	return 0;
}
