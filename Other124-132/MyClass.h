#pragma once
#include <iostream>
template <class T1, typename T2>
class MyClass
{
public:
	MyClass(T1 value, T2 value2) {
		this->value = value;
		this->value2 = value2;
	}
	void DataTypeSize() {
		std::cout << "value = " << sizeof(value) << std::endl;
		std::cout << "value2 = " << sizeof(value2) << std::endl;
	}
	T1 GetValue() { return value; }
	T2 GetValue2() { return value2; }
private:
	T1 value;
	T2 value2;
};