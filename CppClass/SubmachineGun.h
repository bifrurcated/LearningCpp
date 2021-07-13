#pragma once
#include "Gun.h"

class SubmachineGun : public Gun {
public:
	void Shoot() override {
		std::cout << "BANG! BANG! BANG!" << std::endl;
	}
};