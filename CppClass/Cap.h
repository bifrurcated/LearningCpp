#pragma once
#include <string>
class Cap {
	//можем использовать с другими классами, он не прив€зан
	// к другим классам, пример агрегации
public:
	Cap() {
		std::cout << "¬ызвалс€ конструктор класса Cap" << std::endl;
	}
	Cap(std::string color) {
		this->color = color;
	}
	~Cap() {
		std::cout << "¬ызвалс€ деструктор класса Cap" << std::endl;
	}
	std::string GetColor()
	{
		return color;
	}
private:
	std::string color = "red";
};