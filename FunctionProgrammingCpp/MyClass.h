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
			//this ������� ������� ����� ��� ������ � ������ �������
			this->Msg();
		};
		f();
	}
};