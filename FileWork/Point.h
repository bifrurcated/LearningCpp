#pragma once
#include <iostream>

class Point {
public:
	Point() { x = y = z = 0; }
	Point(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void Print() {
		std::cout << "x = " << x << "\ty = " << y << "\tz = " << z << std::endl;
	}
	friend std::ostream& operator<<(std::ostream& os, Point const& point);
	friend std::istream& operator>>(std::istream& is, Point& point);
private:
	int x;
	int y;
	int z;
};