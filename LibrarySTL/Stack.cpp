#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>

using namespace std;

/*
*	���������� ���������� �������� (STL)
*	�������� �����������
*	stack
*/


int Stack()
{
	setlocale(LC_ALL, "RU");
	//���������� �� �������� ���� �� ������ ���������� ������ ���� �� ������ �����������
	stack<int, list<int>> st;

	//push ������ ����� � �������� � ����������
	//emplace ������ ������ � ���������� �� ������ ����� �� ����������
	st.push(13);
	st.push(42);
	st.push(91);
	st.emplace(12);
	st.emplace(13);

	cout << "size = " << st.size() << endl;
	cout << "empty = " << st.empty() << endl;
	cout << "top = " << st.top() << endl;
	st.pop();
	cout << "pop" << endl;
	cout << "top = " << st.top() << endl;

	cout << "while:" << endl;
	while (!st.empty()) {
		cout << "top = " << st.top() << "\t";
		st.pop();
	}
	cout << endl;
	return 0;
}
