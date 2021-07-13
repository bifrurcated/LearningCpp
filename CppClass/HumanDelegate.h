#pragma once
#include <string>
class HumanDelegate {
public:
	HumanDelegate(std::string Name) {
		this->Name = Name;
		this->Age = 0;
		this->Weight = 0;
	}
	HumanDelegate(std::string Name, int Age): HumanDelegate(Name) {
		this->Age = Age;
	}
	HumanDelegate(std::string Name, int Age, int Weight) : HumanDelegate(Name, Age) {
		this->Weight = Weight;
	}
	std::string Name;
	int Age;
	int Weight;
};