#include <iostream>
#include <set>

using namespace std;

/*
	����������� ����������� �������� (STL)
	����������� �� ������ ��������� ������
	multiset
*/

template <typename T>
void PrintMultiset(multiset<T> const& s) {
	for (auto const& it : s)
	{
		cout << it << "\t";
	}
	cout << endl;
}

int MultiSet()
{
	setlocale(LC_ALL, "RU");

	//��� �� set ������ ����� ��������� ������������� ��������
	multiset<int> myMultiset = { 0,11,11,2,34,6,2 };

	PrintMultiset(myMultiset);

	//��������� ���������� ����� ������� �� ����
	auto it1 = myMultiset.lower_bound(11);//����� ������ �������� ������� �����
	auto it2 = myMultiset.upper_bound(11);//����� ��������� ������� ������� ����� ������ ���� ��� �� ����
	cout << "it1 = " << *it1 << endl;
	cout << "it2 = " << *it2 << endl;

	auto equal = myMultiset.equal_range(11); // ���������� ��� �������� ����� upped_bound � lower_bound
	cout << "equal.first = " << *equal.first << endl;
	cout << "equal.second = " << *equal.second << endl;

	return 0;
}
