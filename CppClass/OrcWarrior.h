#pragma once
#include "Orc.h"
#include "Warrior.h"

class OrcWarrior : public Orc, public Warrior {
public:
	OrcWarrior() {
		std::cout << "Конструктор OrcWarrior" << std::endl;
	}
};