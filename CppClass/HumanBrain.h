#pragma once
#include <iostream>
#include "Cap.h"

class HumanBrain {
public:
	void Think()
	{
		brain.Think(); // пример композиции когда вызываем метод из внутреннего класса
	}
	void InspectTheCap()
	{
		std::cout << "Моя кепка " << cap.GetColor() << " цвета." << std::endl;
	}
private:
	class Brain {
	public:
		void Think()
		{
			std::cout << "Я думаю" << std::endl;
		}
	};
	Brain brain;
	Cap cap;
};