#pragma once

class Cat {
public:
	Cat(int initialAge);
	~Cat();
	int GetAge() const;
	void SetAge(int age) { itsAge = age; }; // �������!
	void Meow();
private:
	int itsAge;
};
