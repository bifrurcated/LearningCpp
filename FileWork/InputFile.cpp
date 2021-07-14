#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int InputFile()
{
	setlocale(LC_ALL, "RU");

	string path = "myfile.txt";

	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "Ошибка открытия файла!" << endl;
		return -1;
	}
	cout << "Файл открыт!" << endl;
	/*char ch;
	while (fin.get(ch))//посимвольно считывает данные
	{
		cout << ch;
	}*/
	string str;
	//char symbols[50];
	while (!fin.eof())
	{
		str = "";
		//strcpy_s(symbols, "0");
		//fin >> str; //считытвает данные до первого пробела
		getline(fin, str); //считывает по строчно до перехода на следующую строку
		//fin.getline(symbols, 50); // работает плохо
		cout << str << endl;
	}
	fin.close();

	return 0;
}