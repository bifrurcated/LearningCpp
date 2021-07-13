#pragma once
#include "Weapon.h"

class Knife : public Weapon{
public:
	void Shoot() override {
		std::cout << "Vjuh!" << std::endl;
	}
};