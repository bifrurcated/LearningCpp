#pragma once
#include <iostream>
class TestClass {
public:
	int& operator[](int index) {
		if (index < 0 || index >= 5) {
			std::cout << "Out of array size!" << std::endl;
		}
		return arr[index];
	}
private:
	int arr[5]{ 2,44,32,4,5 };
};