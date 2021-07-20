#pragma once
#include <iostream>

class MyClass {
public:
	int a = 11;
	void Msg() {
		std::cout << "Msg" << std::endl;
	}
	void lambda() {
		auto f = [this]() {
			//this передаём текущий класс для работы в лямбда функции
			this->Msg();
		};
		f();
	}
};