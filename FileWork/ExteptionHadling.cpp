#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
	обработка исключений try catch
*/

int ExceptionHandling()
{
	setlocale(LC_ALL, "RU");

	string path = "TryCatch.txt";
	ifstream fin; //По умолчанию обработка исключений в классе отключена, чтобы её включить нужно вызвать метод exception и передать туда параметры ifstream::badbit | ifstream::failbit
	fin.exceptions(ifstream::badbit | ifstream::failbit);
	try
	{
		cout << "Попытка открытия файла..." << endl;
		fin.open(path);
		cout << "Файл успешно открыт!" << endl;
	}
	catch (const ifstream::failure& ex)
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "Ошибка открытия файла!" << endl;
	}
	return 0;
}