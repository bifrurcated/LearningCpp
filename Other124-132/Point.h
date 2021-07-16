#pragma once

class Point {
public:
	Point() { x = y = z = 0; }
	Point(double x, double y, double z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
private:
	double x, y, z;
};