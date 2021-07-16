#pragma once
#include <iostream>

template <typename T>
class SmartPointer {
public:
	SmartPointer() {}
	SmartPointer(T * ptr) {
		this->ptr = ptr;
		std::cout << "Constructor" << std::endl;
	}
	SmartPointer(SmartPointer const& other) {
		std::cout << "Вызвался конструктор копирования " << this << std::endl;
		this->ptr = new T(*other.ptr);
	}
	~SmartPointer() {
		if (ptr != nullptr) {
			delete *&ptr;
			ptr = nullptr;
		}
		std::cout << "Destructor" << std::endl;
	}

	T& operator*() {
		return *ptr;
	}

private:
	T* ptr;
};