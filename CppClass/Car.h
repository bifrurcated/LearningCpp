#pragma once
#include <iostream>
#include <string>

class Car {
public:
	Car() {
		std::cout << "�������� ����������� ������ Car" << std::endl;
	}
	Car(std::string str1) {
		this->str1 = str1;
		std::cout << "�������� ����������� 2 ������ Car" << std::endl;
	}
	virtual ~Car() {
		std::cout << "�������� ���������� ������ Car" << std::endl;
	}
	std::string str1 = "���� ������ ������";
	void Use() {
		std::cout << "I drive!" << std::endl;
	}
};
