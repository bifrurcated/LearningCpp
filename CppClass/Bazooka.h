#pragma once
#include "Weapon.h"

class Bazooka : public Weapon {
public:
	void Shoot() override {
		std::cout << "BOOM!" << std::endl;
	}
};