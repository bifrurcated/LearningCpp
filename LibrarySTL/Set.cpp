#include <iostream>
#include <set>

using namespace std;

/*
	����������� ����������� �������� (STL)
	set - ����������� �� ������ ��������� ������
*/

template <typename T>
void PrintSet(set<T> const& s) {
	for (auto const& it : s)
	{
		cout << it << "\t";
	}
	cout << endl;
}

int Set()
{
	setlocale(LC_ALL, "RU");
	//�������� �����-�� ���������� ����� ������
	//�� ����� ������� � �������� �����
	set<int> mySet = { 1,33,2,12,4,3 };

	auto res = mySet.insert(4); // �������� ������ ��������� � � ����� ����������
	//���� ���� �������� ������� � ��������� ������ ������������ ��������� ����� true (1), ����� false (0)
	cout << "res.first = " << *res.first << " res.second = " << res.second << endl;
	res = mySet.insert(6);
	cout << "res.first = " << *res.first << " res.second = " << res.second << endl;
	PrintSet(mySet);

	auto it = mySet.find(4); //����� ������ �����, ���� �� ����� �� ��������� �������� �� mySet.end()
	cout << "*it = " << *it << endl;

	cout << "erase(4)" << endl;
	auto result = mySet.erase(4); //���� �� �� ������ ������� �� ������� ����� 0 ����� 1
	cout << "result 4 = " << result << endl;
	PrintSet(mySet);

	int value;
	cout << "������� ����� ��� ������: ";
	cin >> value;
	if (mySet.find(value) != mySet.end()) {
		cout << "�����: " << value << " �������." << endl;
	}
	else {
		cout << "�����: " << value << " �����������!" << endl;
	}

	return 0;
}
