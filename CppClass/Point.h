#pragma once
class Test; //почему-то только так работает
class Point {
public:
	Point() { x = 0; y = 0; z = 0; };
	Point(int x, int y, int z);
	void ToString();
	//void SetX(int x) { this->x = x; };
	//void SetY(int y) { this->y = y; };
	//void SetZ(int z) { this->z = z; };
	friend void ChangeX(Point& point, Test& testValue);
	// функция может работать с закрытыми полями
	// не важно где находится friend функция
	int GetX() const { return x; }
	int GetY() const { return y; }
	int GetZ() const { return z; }
	bool operator==(Point const& other);
	bool operator!=(Point const& other);
	bool operator>(Point const& other);
	bool operator<(Point const& other);
	bool operator<=(Point const& other);
	bool operator>=(Point const& other);
	Point operator+(Point const& other);
	Point operator-(Point const& other);
	Point operator*(Point const& other);
	Point operator/(Point const& other);
	Point& operator++(); //префиксная
	Point& operator++(int value); //постфиксная
	Point& operator--(); //префиксная
	Point& operator--(int value); //постфиксная
private:
	int x;
	int y;
	int z;
};

inline Point& Point::operator--(int value)
{
	Point temp(*this);
	this->x--;
	this->y--;
	this->z--;
	return temp;
}

inline Point& Point::operator--()
{
	this->x--;
	this->y--;
	this->z--;
	return *this;
}

inline Point& Point::operator++(int value)
{
	Point temp(*this);
	++(*this);
	return temp;
}

inline Point& Point::operator++()
{
	this->x++;
	this->y++;
	this->z++;
	return *this;
}

inline Point Point::operator/(Point const& other)
{
	Point temp;
	temp.x = this->x / other.x;
	temp.y = this->y / other.y;
	temp.z = this->z / other.z;
	return temp;
}

inline Point Point::operator*(Point const& other)
{
	Point temp;
	temp.x = this->x * other.x;
	temp.y = this->y * other.y;
	temp.z = this->z * other.z;
	return temp;
}

inline Point Point::operator+(Point const& other)
{
	Point temp;
	temp.x = this->x + other.x;
	temp.y = this->y + other.y;
	temp.z = this->z + other.z;
	return temp;
}

inline Point Point::operator-(Point const& other)
{
	Point temp;
	temp.x = this->x - other.x;
	temp.y = this->y - other.y;
	temp.z = this->z - other.z;
	return temp;
}

inline bool Point::operator==(Point const& other)
{
	return x==other.x && y==other.y && z==other.z;
}

inline bool Point::operator!=(Point const& other)
{
	return !(this==&other);
}

inline bool Point::operator>(Point const& other)
{
	return x > other.x && y > other.y && z > other.z;
}

inline bool Point::operator<(Point const& other)
{
	return x < other.x && y < other.y && z < other.z;
}

inline bool Point::operator>=(Point const& other)
{
	return !(this < &other);
}

inline bool Point::operator<=(Point const& other)
{
	return !(this > &other);
}

inline Point::Point(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point::ToString()
{
	std::cout << "X = " << x 
		<< "\nY = " << y
		<< "\nZ = " << z << "\n\n";
}