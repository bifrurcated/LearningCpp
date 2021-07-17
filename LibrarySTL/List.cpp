#include <iostream>
#include <vector>
#include <list>

using namespace std;

/*
	����������� ���������� �������� (STL)
	List (���������� ������)
*/

template<typename T>
void PrintList(list<T> const& lst) {
	for (
		auto it = lst.begin();
		it != lst.end();
		++it // ����� ���������� ������ �������� ������� ��-�� ���� �� �� ���� ��������� ��������� ����������
		)
	{
		cout << *it << "\t";
	}
	cout << endl;
}

int List()
{
	setlocale(LC_ALL, "RU");

	//���������� ������
	list<int> myList = { 1,4,1,3,1,1,1 };
	PrintList(myList);

	cout << "unique" << endl;
	myList.unique(); //������� ��������� ������ ���������������
	PrintList(myList);

	cout << "reverse" << endl;
	myList.reverse(); //������ ������� ������������ ��������� �� ��������
	PrintList(myList);

	myList.push_back(123);
	myList.push_front(100);

	list<int>::iterator iter = ++myList.begin();
	cout << "iter = " << *iter << endl;
	PrintList(myList);
	myList.sort();
	PrintList(myList);

	cout << "pop_front" << endl;
	myList.pop_front();
	PrintList(myList);

	cout << "size = " << myList.size() << endl;

	cout << "insert" << endl;
	auto iterator = myList.begin();
	advance(iterator, 5);
	myList.insert(iterator, 111);
	PrintList(myList);

	cout << "erase" << endl;
	myList.erase(--iterator);
	PrintList(myList);

	cout << "remove" << endl;
	myList.push_back(1);
	myList.remove(1); //������� ��� ������� ������� �� ��������
	PrintList(myList);

	cout << "assign" << endl;
	myList.assign(3, 132); //������� ��� �������� � ��������� ��������� ��� �������� ������ ����������
	PrintList(myList);

	list<int> myList2 = { 1,2,3,4,5,6,7,8,9,0 };
	cout << "assign copy list" << endl;
	myList.assign(myList2.begin(), myList2.end()); //������� ��� �������� � �������� ��� �������� � ��������� ���������
	PrintList(myList);

	return 0;
}
