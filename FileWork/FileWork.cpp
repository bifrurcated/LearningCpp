#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	string path = "myfile.txt";
	ofstream fout;

	fout.open(path, ofstream::app); //параметр для добавления в конец
	if (!fout.is_open()) {
		cout << "Ошибка открытия файла" << endl;
		return -1;
	}
	cout << "Введите число!" << endl;
	int a;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		fout << a << "\n";
	}
	
	fout.close();

	return 0;
}