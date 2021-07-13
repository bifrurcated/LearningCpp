#pragma once
#include <string>
#include <iostream>

class Human
{
public:
	Human() {
		age = 0;
		weight = 0;
		ID++;
	}
	int const id = ID;
	int age;
	int weight;
	std::string name;
	void ToString();
	void TakeApple(Apple& apple);
	void EatApple(Apple& apple)
	{
		apple.weight = 0;
	}
	void Think()
	{
		brain.Think();
	}
private:
	static int ID;
	class Brain {
	public:
		void Think()
		{
			std::cout << "Я думаю" << std::endl;
		}
	};

	Brain brain;
};

int Human::ID = 0;

void Human::ToString() {
	std::cout << "Name = " << name << "\nAge = " << age
		<< "\nWeight = " << weight << "\n\n";
}