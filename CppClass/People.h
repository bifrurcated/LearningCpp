#pragma once
#include <string>
#include <iostream>
class People {
public:
	People() {
		std::cout << "Вызвался конструктор People" << std::endl;
	}
	People(std::string name) {
		this->name = name;
	}
	~People() {
		std::cout << "Вызвался деструктор People" << std::endl;
	}
	std::string GetName() {
		return name;
	}
	void SetName(std::string name) {
		this->name = name;
	}
protected:
	std::string name;
};