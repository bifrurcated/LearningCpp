#pragma once
#include <string>
#include "People.h"

class Student : private People {
public:
	Student() {
		std::cout << "�������� ����������� Student" << std::endl;
	}
	Student(std::string name) : People(name) {
		std::cout << "�������� ����������� Student � name" << std::endl;
	}
	~Student() {
		std::cout << "�������� ���������� Student" << std::endl;
	}
	std::string group;
	void Learn()
	{
		std::cout << "� �����!" << std::endl;
	}
	std::string GetNameStudent() {
		return GetName();
	}
	void SetNameStudent(std::string name) {
		SetName(name);
	}
protected:
	void Clear() {
		name = "";
		group = "";
	}
};