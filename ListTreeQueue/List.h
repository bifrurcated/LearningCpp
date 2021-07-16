#pragma once

template <typename T>
class List
{
public:
	List();
	~List();

	void push_back(T data);
	int GetSize() { return Size; }

	T& operator[](int const index);

private:
	template <typename T>
	class Node {
	public:
		Node* pNext;
		T data;
		Node(T data=T(), Node* pNext=nullptr) { 
			this->data = data; 
			this->pNext = pNext; 
		}
	};
	int Size;
	Node<T>* head;
};

