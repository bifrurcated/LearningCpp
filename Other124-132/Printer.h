#pragma once
#include <iostream>

template<typename T>
class Printer {
public:
	void Print(T value) {
		std::cout << value << std::endl;
	}
};

template<> // Специализированный шаблон
class Printer<std::string> {
public:
	void Print(std::string value) {
		std::cout << "____" << value << "____" << std::endl;
	}
};