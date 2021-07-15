#pragma once
#include <iostream>
class MyClass1 {
private:
	int *data;
	int size;
public:
	MyClass1(int size);
	MyClass1(MyClass1 const& other);
	~MyClass1();
	MyClass1& operator=(MyClass1 const& other);
};

MyClass1::MyClass1(int size) {
	this->size = size;
	this->data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = i;
	}
	std::cout << "Вызвался конструктор " << this << std::endl;
}
MyClass1::MyClass1(MyClass1 const& other)
{
	std::cout << "Вызвался конструктор копирования " << this << std::endl;
	this->size = other.size;
	this->data = new int[other.size];
	for (int i = 0; i < other.size; i++)
	{
		this->data[i] = other.data[i];
	}
}
MyClass1::~MyClass1() {
	delete[] data;
	data = nullptr;
	std::cout << "Вызвался деструктор " << this << std::endl;
}

MyClass1& MyClass1::operator=(MyClass1 const& other)
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