#pragma once
#include <string>
class Cap {
	//����� ������������ � ������� ��������, �� �� ��������
	// � ������ �������, ������ ���������
public:
	Cap() {
		std::cout << "�������� ����������� ������ Cap" << std::endl;
	}
	Cap(std::string color) {
		this->color = color;
	}
	~Cap() {
		std::cout << "�������� ���������� ������ Cap" << std::endl;
	}
	std::string GetColor()
	{
		return color;
	}
private:
	std::string color = "red";
};