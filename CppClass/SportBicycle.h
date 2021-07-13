#pragma once
#include "IBicycle.h"
#include <iostream>

class SportBicycle : public IBicycle {
public:
	void TwistTheWheel() override {
		std::cout << "����� TwistTheWheel() SportBicycle" << std::endl;
	}
	void Ride() override {
		std::cout << "����� Ride() SportBicycle" << std::endl;
	}
};