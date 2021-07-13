#pragma once
#include <string>
#include "People.h"

class Professor : public People{
public:
	std::string subject;
	std::string GetName() {
		return name + "-san";
	}
};