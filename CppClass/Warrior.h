#pragma once
#include "Character.h"

class Warrior : public virtual Character {
public:
	Warrior() {
		std::cout << "����������� Warrior" << std::endl;
	}
};