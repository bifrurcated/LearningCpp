#pragma once
#include <iostream>

class Airplane {
public:
	Airplane() {
		std::cout << "�������� ����������� ������ Airplain" << std::endl;
	}
	Airplane(std::string str2){
		this->str2 = str2;
		std::cout << "�������� ����������� 2 ������ Airplain" << std::endl;
	}
	virtual ~Airplane() {
		std::cout << "�������� ���������� ������ Airplain" << std::endl;
	}
	std::string str2 = "���� ������ ������";
	void Use() {
		std::cout << "I fly!" << std::endl;
	}
};