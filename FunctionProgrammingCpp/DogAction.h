#pragma once
#include "IAction.h"
#include <iostream>

class DogAction : public IAction {
public:
	virtual void Action() override {
		std::cout << "������ � �������" << std::endl;
	}
};