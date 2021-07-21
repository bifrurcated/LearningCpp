#pragma once
#include <string>

class Person {
public:
	
	Person(std::string name, double score) {
		this->name = name;
		this->score = score;
	}
	Person(std::string name, double score, int age) 
		: Person(name, score) 
	{
		this->age = age;
	}
	bool operator()(Person const& p) {
		return p.score > 180;
	}
	
	std::string name;
	double score;
	int age;
};