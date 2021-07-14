#include <iostream>
#include <string>
#include <fstream>
#include "Point.h"

using namespace std;

/*
	перегрузка операторов потокового ввода вывода
	>> <<
*/

std::ostream& operator<<(std::ostream& os, Point const& point) {
	os << point.x << " " << point.y << " " << point.z;
	return os;
}

std::istream& operator>>(std::istream& is, Point& point) {
	is >> point.x >> point.y >> point.z;
	return is;
}

int OperatorInOut()
{
	setlocale(LC_ALL, "RU");

	string path = "operatorInOut.txt";

	Point point(120, 13, 333);

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);

	if (!fs.is_open()) {
		cout << "Error opening file!" << endl;
		return -1;
	}
	cout << "File is open!" << endl;
	//fs << point << "\n";

	while (true) {
		Point p;
		fs >> p;
		if (fs.eof()) { break; }
		cout << p << endl;
	}

	fs.close();
	return 0;
}