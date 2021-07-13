#pragma once
#include "Msg.h"

class BraketsMsg : public Msg {
public:
	BraketsMsg(std::string msg) : Msg(msg) {}
	std::string GetMsg() override {
		return "["+ ::Msg::GetMsg() +"]";
	}
};