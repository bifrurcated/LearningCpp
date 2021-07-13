#pragma once
#include "Airplain.h"
#include "Car.h"

class FlyingCar : public Car, public Airplane {
public:
	FlyingCar(){
		std::cout << "Вызвался конструктор класса FlyingCar" << std::endl;
	}
	FlyingCar(std::string str1, std::string str2) 
		: Car(str1), Airplane(str2) {
		std::cout << "Вызвался конструктор 2 класса FlyingCar" << std::endl;
	}
	~FlyingCar() override {
		std::cout << "Вызвался деструктор класса FlyingCar" << std::endl;
	}
};