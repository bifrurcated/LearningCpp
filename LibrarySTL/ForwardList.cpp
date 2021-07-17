#include <iostream>
#include <forward_list>

using namespace std;

/*
	Ѕибилиотека стандартных шаблонов (STL)
	forward_list
*/

template <typename T>
void PrintForwardList(forward_list<T> const& fl) {
	for (auto const& it : fl) {
		cout << it << "\t";
	}
	cout << endl;
}

int ForwardList()
{
	setlocale(LC_ALL, "RU");

	forward_list<int> fl = { 1,2,3,45 }; //односв€занный список
	//есть операции только дл€ начала списка
	cout << "Emptry() = " << fl.empty() << endl;
	PrintForwardList(fl);

	cout << "Iterator:" << endl;
	forward_list<int>::iterator it = fl.begin();
	++it;
	//отсутствует обратна€ св€зть it--; только вперЄд it++;
	cout << *it << endl;

	cout << "insert_after:" << endl;
	//приставка _after вставл€ют после элемента
	fl.insert_after(it, 999);
	PrintForwardList(fl);

	cout << "erase_after:" << endl;
	fl.erase_after(it);
	PrintForwardList(fl);

	return 0;
}
