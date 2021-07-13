#pragma once
#include <iostream>
class MyClass {
private:
	int *data;
	int size;
public:
	MyClass(int size);
	MyClass(MyClass const& other);
	~MyClass();
	MyClass& operator=(MyClass const& other);
};

MyClass::MyClass(int size) {
	this->size = size;
	this->data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = i;
	}
	std::cout << "Вызвался конструктор " << this << std::endl;
}
MyClass::MyClass(MyClass const& other)
{
	std::cout << "Вызвался конструктор копирования " << this << std::endl;
	this->size = other.size;
	this->data = new int[other.size];
	for (int i = 0; i < other.size; i++)
	{
		this->data[i] = other.data[i];
	}
}
MyClass::~MyClass() {
	delete[] data;
	data = nullptr;
	std::cout << "Вызвался деструктор " << this << std::endl;
}

MyClass& MyClass::operator=(MyClass const& other)
{
	std::cout << "Вызвался оператор присваивания" << this << std::endl;
	this->size = other.size;
	if (this->data != nullptr) {
		delete[] this->data;
	}
	this->data = new int[other.size];
	for (int i = 0; i < other.size; i++)
	{
		this->data[i] = other.data[i];
	}
	return *this;
}