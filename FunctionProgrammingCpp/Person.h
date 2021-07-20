#pragma once
#include <string>

class Person {
public:
	Person(std::string name, double score) {
		this->name = name;
		this->score = score;
	}

	bool operator()(Person const& p) {
		return p.score > 180;
	}
	
	std::string name;
	double score;
};