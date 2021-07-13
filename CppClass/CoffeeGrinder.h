#pragma once
#include <iostream>
class CoffeeGrinder {
private:
	bool CheckVoltage() { return true; };
public:
	void Start();
};

void CoffeeGrinder::Start()
{
	if(CheckVoltage()){
		std::cout << "Vjuhh!" << std::endl;
	}
	else {
		std::cout << "Beep Beep" << std::endl;
	}
}