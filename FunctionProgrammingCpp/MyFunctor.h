#pragma once
#include <iostream>

class MyFunctor {
public:
	int operator()(int a, int b) {
		std::cout << "Я функтор " << std::endl;
		return a + b;
	}
};