#pragma once
#include "Component.h"

class Memory : public Component {
public:
	Memory(std::string companyName) :Component(companyName) {
		std::cout << "����������� Memory" << std::endl;
	}

};