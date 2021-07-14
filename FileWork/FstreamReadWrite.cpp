#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

/*
	fstream ������\���������� ������
*/

int FstreamReadWrite()
{
	setlocale(LC_ALL, "RU");

	string path = "fstreamRW.txt";

	fstream fs;
	/*
		fstream::in - �������� ����� �� ������
		fstream::out - �������� ����� �� ������
		fstream::app - ��� ���������� ����� ������ ������ �� ���������� (��������)
	*/
	fs.open(path, fstream::in | fstream::out | fstream::app);

	if (!fs.is_open()) {
		cout << "Error opening file!" << endl;
		return -1;
	}
	cout << "File is open!" << endl;
	cout << "������� 1 ��� ������ ��������� � ����:" << endl;
	cout << "������� 2 ��� ���������� ��������� �� �����:" << endl;
	int value;
	string msg;
	cin >> value;
	if (value == 1) {
		cout << "������� ���� ���������:" << endl;
		SetConsoleCP(1251);
		cin >> msg;
		fs << msg << "\n";
		SetConsoleCP(866);
	}
	else if (value == 2) {
		cout << "���� ������:" << endl;
		while (!fs.eof()) {
			msg = "";
			fs >> msg;
			cout << msg << endl;
		}
	}
	fs.close();
	return 0;
}