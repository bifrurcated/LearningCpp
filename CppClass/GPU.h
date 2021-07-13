#pragma once
#include "Component.h"

class GPU : public Component {
public:
	GPU(std::string companyName) :Component(companyName) {
		std::cout << "Конструктор GPU" << std::endl;
	}
};