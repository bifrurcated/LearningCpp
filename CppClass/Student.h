#pragma once
#include <string>
#include "People.h"

class Student : private People {
public:
	Student() {
		std::cout << "Вызвался конструктор Student" << std::endl;
	}
	Student(std::string name) : People(name) {
		std::cout << "Вызвался конструктор Student с name" << std::endl;
	}
	~Student() {
		std::cout << "Вызвался деструктор Student" << std::endl;
	}
	std::string group;
	void Learn()
	{
		std::cout << "Я учусь!" << std::endl;
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