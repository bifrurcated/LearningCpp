#pragma once
#include "Character.h"

class Orc : public virtual Character {
public:
	Orc() {
		std::cout << "Конструктор Orc" << std::endl;
	}
};