#pragma once
#include <iostream>

class Character {
public:
	Character() {
		HP = 100;
		std::cout << "����������� Character" << std::endl;
	}
	int HP;
};