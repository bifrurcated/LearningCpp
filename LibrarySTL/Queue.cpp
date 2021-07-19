#include <iostream>
#include <vector>
#include <list>
#include <deque>

#include <queue>

using namespace std;

/*
*	Библиотека стандарных шаблонов (STL)
*	Адаптеры контейнеров
*	queue
*	priority_queue
*/
template <typename T>
void PrintQueue(queue<T> q) {
	while (!q.empty()) {
		cout << q.front() << "\t";
		q.pop();
	}
	cout << endl;
}

int Queue()
{
	setlocale(LC_ALL, "RU");

	queue<int> q;

	q.push(12);
	q.push(3);
	q.push(79);
	q.push(13);
	PrintQueue(q);
	cout << "front = " << q.front() << endl;
	cout << "back = " << q.back() << endl;
	cout << "pop" << endl;
	q.pop();
	PrintQueue(q);
	cout << "front = " << q.front() << endl;
	cout << "back = " << q.back() << endl;

	queue<int, vector<int>> qVector;
	qVector.push(1);
	qVector.push(13);
	qVector.emplace(3);
	//qVector.pop() не работает, так как в vector нет реализации такой функции
	cout << qVector.back() << endl;
	return 0;
}
