#include "List.h"

template <typename T>
List<T>::List() {
	Size = 0;
	head = nullptr;
}

template <typename T>
List<T>::~List() {

}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr) {
		head = new Node<T>(data);
	}
	else {
		Node<T>* current = this->head;
		while (current->pNext != nullptr) {
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	Size++;
}

template<typename T>
T& List<T>::operator[](int const index)
{
	int count = 1;
	Node<T>* current = this->head;
	while (current != nullptr) {
		if (count == index) {
			return current->data;
		}
		current = current->pNext;
		count++;
	}
}
