#include "Cat.hpp"
#include <iostream>

Cat::Cat(int initialAge) {
	itsAge = initialAge;
}

Cat::~Cat()
{
	itsAge = 0;
}

int Cat::GetAge() const {
	return itsAge;
}

void Cat::Meow() {
	std::cout << "Meow." << std::endl;
}