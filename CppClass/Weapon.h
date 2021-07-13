#pragma once
#include <iostream>

class Weapon {
public:
	virtual void Shoot() = 0; //Чисто виртуальная функция
	void Foo() {
		std::cout << "Foo()" << std::endl;
	}
};