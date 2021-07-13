#pragma once
#include "IBicycle.h"
#include <iostream>

class SimpleBicycle : public IBicycle {
public:
	void TwistTheWheel() override {
		std::cout << "метод TwistTheWheel() SimpleBicycle" << std::endl;
	}
	void Ride() override {
		std::cout << "метод Ride() SimpleBicycle" << std::endl;
	}
};