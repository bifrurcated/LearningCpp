#pragma once
#include "Student.h"
#include "Cap.h"
class ExtramuralStudent : public Student {
public:
	ExtramuralStudent() {
		std::cout << "Вызвался конструктор ExtramuralStudent" << std::endl;
	}
	~ExtramuralStudent() {
		std::cout << "Вызвался деструктор ExtramuralStudent" << std::endl;
	}
	void SetNameExtramural(std::string name) {
		SetNameStudent(name);
	}
	std::string GetNameExtramural() {
		return GetNameStudent();
	}
	void Learn()
	{
		std::cout << "Я бываю в университете реже обычного студента! " << group  << std::endl;
	}
};