#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

/*
	fstream чтение\сохранение данных
*/

int FstreamReadWrite()
{
	setlocale(LC_ALL, "RU");

	string path = "fstreamRW.txt";

	fstream fs;
	/*
		fstream::in - открытие файла на чтение
		fstream::out - открытие файла на запись
		fstream::app - при добавдении новых данных старые не затираютс€ (дозапись)
	*/
	fs.open(path, fstream::in | fstream::out | fstream::app);

	if (!fs.is_open()) {
		cout << "Error opening file!" << endl;
		return -1;
	}
	cout << "File is open!" << endl;
	cout << "¬ведите 1 дл€ записи сообщени€ в файл:" << endl;
	cout << "¬ведите 2 дл€ считывани€ сообщений из файла:" << endl;
	int value;
	string msg;
	cin >> value;
	if (value == 1) {
		cout << "¬ведите ваше сообщение:" << endl;
		SetConsoleCP(1251);
		cin >> msg;
		fs << msg << "\n";
		SetConsoleCP(866);
	}
	else if (value == 2) {
		cout << "¬аши данные:" << endl;
		while (!fs.eof()) {
			msg = "";
			fs >> msg;
			cout << msg << endl;
		}
	}
	fs.close();
	return 0;
}