#pragma once
#include <iostream>

template <class T1>
class TypeSize
{
public:
	TypeSize(T1 value) {
		this->value = value;
	}

	void DataTypeSize() {
		std::cout << "value = " << sizeof(value) << std::endl;
	}

protected:
	T1 value;
};