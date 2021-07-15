#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
	несколько блоков catch
*/

void PrintValue(int value) {
	if (value < 0) {
		throw "Число меньше нуля!";
	}
	if (value == 0) {
		throw exception("Число равно нулю!");
	}
	if (value == 1) {
		throw 1;
	}
	cout << "Переменная = " << value << endl;
}

int SeveralCatch()
{
	setlocale(LC_ALL, "RU");
	try {
		PrintValue(1);
	}
	catch (const std::exception& ex) {
		cout << "Блок 1 Мы поймали: " << ex.what() << endl;
	}
	catch (const char* ex) {
		cout << "Блок 2 Мы поймали: " << ex << endl;
	}
	catch (...) {
		//сюда мы поймаем всё что бросить exception
		//данное исключение должно быть в конце
		cout << "Блок 3 Что-то пошло не так!" << endl;
	}
	return 0;
}