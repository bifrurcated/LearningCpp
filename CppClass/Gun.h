#pragma once
#include "Weapon.h"

class Gun : public Weapon{
public:
	void Shoot() override{
		std::cout << "BANG!" << std::endl;
	}
};