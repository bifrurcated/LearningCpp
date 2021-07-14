#include <iostream>
#include <string>
#include <fstream>
#include "Point.h"

using namespace std;

/*
	Чтение\сохранение объекта класса в файл
*/

int SaveReadObjectClass()
{
	setlocale(LC_ALL, "RU");

	bool isOutFile = false;
	string path = "myfile.txt";

	if (isOutFile) {
		Point point(120, 43, 123);
		point.Print();

		ofstream fout;
		fout.open(path, ofstream::app);
		if (!fout.is_open()) {
			cout << "Error opening file!" << endl;
			return -1;
		}
		cout << "File is open!" << endl;

		fout.write((char*)&point, sizeof(Point));

		fout.close();
	}
	else {
		ifstream fin;
		fin.open(path);

		if (!fin.is_open()) {
			cout << "Error opening file!" << endl;
			return -1;
		}
		cout << "File is open!" << endl;

		Point pnt;
		while (fin.read((char*)&pnt, sizeof(Point))) {
			pnt.Print();
		}
		fin.close();
	}
	return 0;
}