#pragma once
#include "IBicycle.h"
#include <iostream>
class HumanRide {
public:
	void RideOn(IBicycle& bicycle) {
		std::cout << "������ ����" << std::endl;
		bicycle.TwistTheWheel();
		std::cout << "�������" << std::endl;
		bicycle.Ride();
	}
};