#pragma once
#include <iostream>

class Character {
public:
	Character() {
		HP = 100;
		std::cout << "Конструктор Character" << std::endl;
	}
	int HP;
};