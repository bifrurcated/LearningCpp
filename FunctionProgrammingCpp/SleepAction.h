#pragma once
#include "IAction.h"
#include <iostream>

class SleepAction : public IAction {
public:
	virtual void Action() override {
		std::cout << "Спим" << std::endl;
	}
};