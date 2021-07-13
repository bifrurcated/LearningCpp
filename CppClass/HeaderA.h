#pragma once
#include <iostream>

class HeaderA {
public:
	HeaderA() {
		std::cout << "Выделена динамическая память, объекта класса HeaderA" << std::endl;
	}
	/*virtual ~HeaderA() { //делаем деструктор виртуальным, чтобы переопределить его
		std::cout << "Освобождение динамеской памяти, объекта класса HeaderA" << std::endl;
	}*/
	virtual ~HeaderA() = 0;
};

HeaderA::~HeaderA() { //синтаксис для того чтобы работал чистый виртуальный деструктор
	std::cout << "Освобождение динамеской памяти, объекта класса HeaderA" << std::endl;
}