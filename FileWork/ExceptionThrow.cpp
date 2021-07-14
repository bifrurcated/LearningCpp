#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
	обработка исключений
	throw (бросить)
*/

void Foo(int value) {
	if (value < 0) {
		throw exception("Число меньше нуля!");
	}
	cout << "Переменная = " << value << endl;
}

int main()
{
	setlocale(LC_ALL, "RU");
	try {
		Foo(-55);
	}
	catch (const std::exception& ex) {
		cout << "Мы поймали: " << ex.what() << endl;
	}
	return 0;
}