#pragma once
#include "IBicycle.h"
#include <iostream>

class SimpleBicycle : public IBicycle {
public:
	void TwistTheWheel() override {
		std::cout << "����� TwistTheWheel() SimpleBicycle" << std::endl;
	}
	void Ride() override {
		std::cout << "����� Ride() SimpleBicycle" << std::endl;
	}
};