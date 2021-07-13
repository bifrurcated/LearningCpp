#pragma once
#include <string>
#include <iostream>

class Component {
public:
	Component(std::string companyName) {
		std::cout << "Конструктор Component" << std::endl;
		this->companyName = companyName;
	}
	std::string companyName;
};