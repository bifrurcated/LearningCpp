#pragma once
#include <iostream>
#include <string>

class Car {
public:
	Car() {
		std::cout << "Вызвался конструктор класса Car" << std::endl;
	}
	Car(std::string str1) {
		this->str1 = str1;
		std::cout << "Вызвался конструктор 2 класса Car" << std::endl;
	}
	virtual ~Car() {
		std::cout << "Вызвался деструктор класса Car" << std::endl;
	}
	std::string str1 = "Поле класса машина";
	void Use() {
		std::cout << "I drive!" << std::endl;
	}
};
