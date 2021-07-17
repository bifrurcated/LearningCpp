#include <iostream>
#include <vector>

using namespace std;

/*
	����������� ���������� �������� (STL)
	VECTOR
*/

int Vector()
{
	setlocale(LC_ALL, "RU");

	vector<int> myVector(5, 2);
	myVector.reserve(100);
	cout << "capacity ������� = " << myVector.capacity() << endl;
	cout << "Emptry() = " << myVector.empty() << endl; //������ �� ���������, 0 - �� ������, 1 - ������
	myVector.push_back(12);
	myVector[0] = 1000;
	try
	{
		cout << myVector.at(4) << endl; //�������� ��������� � ������� �� [] ��-�� ��������
	}
	catch (const std::out_of_range& ex)
	{
		cout << ex.what() << endl;
	}

	cout << "���������� ��������� � ������� = " << myVector.size() << endl;

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << "\t";
	}
	cout << endl;

	myVector.pop_back();

	cout << "���������� ��������� � ������� = " << myVector.size() << endl;

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << "\t";
	}
	cout << endl;

	myVector.shrink_to_fit(); //������������� ������ ���������� ������ ��� ������ �������
	cout << "shrink_to_fit()" << endl;
	cout << "���������� ��������� � ������� = " << myVector.size() << endl;
	cout << "capacity ������� = " << myVector.capacity() << endl;

	myVector.resize(20, 1); //������������� ������ ������ � ������ ������� �� ���� � ���� ��������, ������ �������� ����� ������ ��������� ������
	cout << "resize()" << endl;
	cout << "���������� ��������� � ������� = " << myVector.size() << endl;
	cout << "capacity ������� = " << myVector.capacity() << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << "\t";
	}
	cout << endl;
	return 0;
}
