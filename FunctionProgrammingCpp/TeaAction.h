#pragma once
#include "IAction.h"
#include <iostream>

class TeaAction : public IAction {
public:
	virtual void Action() override {
		std::cout << "���� ���" << std::endl;
	}
};