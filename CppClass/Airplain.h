#pragma once
#include <iostream>

class Airplane {
public:
	Airplane() {
		std::cout << "Вызвался конструктор класса Airplain" << std::endl;
	}
	Airplane(std::string str2){
		this->str2 = str2;
		std::cout << "Вызвался конструктор 2 класса Airplain" << std::endl;
	}
	virtual ~Airplane() {
		std::cout << "Вызвался деструктор класса Airplain" << std::endl;
	}
	std::string str2 = "Поле класса самолёт";
	void Use() {
		std::cout << "I fly!" << std::endl;
	}
};