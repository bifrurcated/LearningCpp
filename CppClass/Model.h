#pragma once
#include "Cap.h"
#include <iostream>

class Model {
public:
	void InspectModel()
	{
		std::cout << "����� " << cap.GetColor() << " �����." << std::endl;
	}
private:
	Cap cap;
};