#pragma once
#include <iostream>

class Weapon {
public:
	virtual void Shoot() = 0; //����� ����������� �������
	void Foo() {
		std::cout << "Foo()" << std::endl;
	}
};