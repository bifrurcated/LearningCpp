#pragma once
#include <iostream>

class HeaderA {
public:
	HeaderA() {
		std::cout << "�������� ������������ ������, ������� ������ HeaderA" << std::endl;
	}
	/*virtual ~HeaderA() { //������ ���������� �����������, ����� �������������� ���
		std::cout << "������������ ���������� ������, ������� ������ HeaderA" << std::endl;
	}*/
	virtual ~HeaderA() = 0;
};

HeaderA::~HeaderA() { //��������� ��� ���� ����� ������� ������ ����������� ����������
	std::cout << "������������ ���������� ������, ������� ������ HeaderA" << std::endl;
}