#pragma once
#include "HeaderA.h"

class HeaderB : public HeaderA {
public:
	HeaderB() {
		std::cout << "�������� ������������ ������, ������� ������ HeaderB" << std::endl;
	}
	~HeaderB() override { //�������������� ���������� �������� ������
		std::cout << "������������ ���������� ������, ������� ������ HeaderB" << std::endl;
	}
};