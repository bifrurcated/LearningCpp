#include <iostream>
#include <vector>
#include <list>
#include <deque>

#include <queue>

using namespace std;

/*
*	Ѕиблиотека стандарных шаблонов (STL)
*	јдаптеры контейнеров
*	queue
*	priority_queue
*/

template <typename T>
void PrintPriorityQueue(priority_queue<T> pq) {
	while (!pq.empty()) {
		cout << pq.top() << "\t";
		pq.pop();
	}
	cout << endl;
}

int PriorityQueue()
{
	setlocale(LC_ALL, "RU");
	//данна€ очередь не работает с list
	//по умолчанию вектор
	priority_queue<int> pq;
	//сортируютс€ от большего к меньшему
	pq.push(12);
	pq.push(3);
	pq.push(9);
	pq.push(7);
	PrintPriorityQueue(pq);
	pq.swap(pq);
	PrintPriorityQueue(pq);
	cout << "top = " << pq.top() << endl;
	cout << "pop" << endl;
	pq.pop();
	cout << "top = " << pq.top() << endl;
	return 0;
}
