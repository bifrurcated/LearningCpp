#pragma once
#include <string>
class Human;
class Apple {
	friend Human; // класс Human friend для Apple
public:
	int const id = ID;
	
	Apple() { this->weight = 0; Count++; ID++; }
	Apple(int weight, std::string color) { 
		this->weight = weight; 
		this->color = color;
		Count++; ID++;
	}
	static int GetCount() { return Count; }
	static void ChangeColor(Apple& apple, std::string color) 
	{
		apple.color = color;
	}
private:
	static int Count;
	static int ID;
	int weight;
	std::string color;
};

int Apple::ID = 0;
int Apple::Count = 0;