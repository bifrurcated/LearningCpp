#pragma once
#include "Airplain.h"
#include "Car.h"

class FlyingCar : public Car, public Airplane {
public:
	FlyingCar(){
		std::cout << "�������� ����������� ������ FlyingCar" << std::endl;
	}
	FlyingCar(std::string str1, std::string str2) 
		: Car(str1), Airplane(str2) {
		std::cout << "�������� ����������� 2 ������ FlyingCar" << std::endl;
	}
	~FlyingCar() override {
		std::cout << "�������� ���������� ������ FlyingCar" << std::endl;
	}
};