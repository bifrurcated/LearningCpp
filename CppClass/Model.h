#pragma once
#include "Cap.h"
#include <iostream>

class Model {
public:
	void InspectModel()
	{
		std::cout << "Кепка " << cap.GetColor() << " цвета." << std::endl;
	}
private:
	Cap cap;
};