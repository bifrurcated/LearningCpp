#pragma once
#include "Student.h"
#include "Cap.h"
class ExtramuralStudent : public Student {
public:
	ExtramuralStudent() {
		std::cout << "�������� ����������� ExtramuralStudent" << std::endl;
	}
	~ExtramuralStudent() {
		std::cout << "�������� ���������� ExtramuralStudent" << std::endl;
	}
	void SetNameExtramural(std::string name) {
		SetNameStudent(name);
	}
	std::string GetNameExtramural() {
		return GetNameStudent();
	}
	void Learn()
	{
		std::cout << "� ����� � ������������ ���� �������� ��������! " << group  << std::endl;
	}
};