#pragma once
#include <iostream>
class TestClass {
public:
	int& operator[](int index) {
		if (index < 0 || index >= 5) {
			throw "Out of array size!";
		}
		return arr[index];
	}
private:
	int arr[5]{ 2,44,32,4,5 };
};