#pragma once
#include "IBicycle.h"
#include <iostream>
class HumanRide {
public:
	void RideOn(IBicycle& bicycle) {
		std::cout << "Крутим руль" << std::endl;
		bicycle.TwistTheWheel();
		std::cout << "Поехали" << std::endl;
		bicycle.Ride();
	}
};