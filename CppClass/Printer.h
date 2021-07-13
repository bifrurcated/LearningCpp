#pragma once
#include "Msg.h"

class Printer {
public:
	void Print(Msg* msg) {
		std::cout << msg->GetMsg() << std::endl;
	}
};