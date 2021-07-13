#pragma once
#include "IBicycle.h"
#include <iostream>

class SportBicycle : public IBicycle {
public:
	void TwistTheWheel() override {
		std::cout << "метод TwistTheWheel() SportBicycle" << std::endl;
	}
	void Ride() override {
		std::cout << "метод Ride() SportBicycle" << std::endl;
	}
};