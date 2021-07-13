#pragma once
#include <iostream>
#include "Cap.h"

class HumanBrain {
public:
	void Think()
	{
		brain.Think(); // ������ ���������� ����� �������� ����� �� ����������� ������
	}
	void InspectTheCap()
	{
		std::cout << "��� ����� " << cap.GetColor() << " �����." << std::endl;
	}
private:
	class Brain {
	public:
		void Think()
		{
			std::cout << "� �����" << std::endl;
		}
	};
	Brain brain;
	Cap cap;
};