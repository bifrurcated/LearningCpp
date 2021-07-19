#include <iostream>
#include <map>

using namespace std;

/*
*	���������� ���������� �������� (STL)
*	map (�������� ������, ������ ���� ��������) ������ ����������
*	multimap ����� ������� ������������� ��������
*/

template <typename T1, typename T2>
void PrintMultimap(multimap<T1, T2> m) {
	for (pair<T1, T2> const& p : m)
	{
		cout << p.first << "\t" << p.second << endl;
	}
}

int Multimap()
{
	setlocale(LC_ALL, "RU");
	//��� ��������� [] � at()
	multimap<string, int> myMultimap;
	myMultimap.emplace("Maxim", 12233);
	myMultimap.emplace("Max", 16233);
	myMultimap.emplace("Max", 157233);
	myMultimap.emplace("Max", 11800);
	myMultimap.emplace("Jonh", 22233);

	PrintMultimap(myMultimap);

	return 0;
}
