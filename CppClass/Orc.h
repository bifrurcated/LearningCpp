#pragma once
#include "Character.h"

class Orc : public virtual Character {
public:
	Orc() {
		std::cout << "����������� Orc" << std::endl;
	}
};