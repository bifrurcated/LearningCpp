#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int OutputFile()
{
	setlocale(LC_ALL, "RU");

	string path = "myfile.txt";
	ofstream fout;

	fout.open(path, ofstream::app); //�������� ��� ���������� � �����
	if (!fout.is_open()) {
		cout << "������ �������� �����" << endl;
		return -1;
	}
	cout << "������� �����!" << endl;
	int a;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		fout << a << "\n";
	}
	fout.close();
	return 0;
}