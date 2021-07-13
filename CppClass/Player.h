#pragma once
#include "Weapon.h"
class Player {
public:
	void Shoot(Weapon* weapon) { 
		weapon->Shoot();
	}
};