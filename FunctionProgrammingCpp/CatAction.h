#pragma once
#include "IAction.h"
#include <iostream>

class CatAction : public IAction{
public:
	virtual void Action() override {
		std::cout << "Гладим кота" << std::endl;
	}
};