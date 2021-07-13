#pragma once
#include "HeaderA.h"

class HeaderB : public HeaderA {
public:
	HeaderB() {
		std::cout << "Выделена динамическая память, объекта класса HeaderB" << std::endl;
	}
	~HeaderB() override { //переопределяем деструктор базового класса
		std::cout << "Освобождение динамеской памяти, объекта класса HeaderB" << std::endl;
	}
};