#pragma once
#include <string>
#include <iostream>

class Msg {
public:
	Msg(std::string msg) {
		this->msg = msg;
	}
	virtual std::string GetMsg() {
		return msg;
	}
private:
	std::string msg;
};