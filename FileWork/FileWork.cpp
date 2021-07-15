#include <iostream>
#include <string>
#include <fstream>
#include "MyException.h"

using namespace std;

/*
	Создание собсвенных исключений
*/

void PrintException(int value) {
	if (value < 0) {
		throw exception("Число меньше нуля!");
	}
	if (value == 1) {
		throw MyException("Число равно 1!", value);
	}
	cout << "Переменная = " << value << endl;
}

int main()
{
	setlocale(LC_ALL, "RU");
	try{
		PrintException(1);
	}
	catch (MyException& ex) {
		cout << "Блок 1 Мы поймали: " << ex.what() << endl;
		cout << "Состояние данных: " << ex.GetDataState() << endl;
	}
	catch (const exception& ex) {
		cout << "Блок 2 Мы поймали: " << ex.what() << endl;
	}
	catch (...) {
		//сюда мы поймаем всё что бросить exception
		//данное исключение должно быть в конце
		cout << "Блок 3 Что-то пошло не так!" << endl;
	}
	return 0;
}