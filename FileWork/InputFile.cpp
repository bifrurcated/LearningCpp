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
		cout << "������ �������� �����!" << endl;
		return -1;
	}
	cout << "���� ������!" << endl;
	/*char ch;
	while (fin.get(ch))//����������� ��������� ������
	{
		cout << ch;
	}*/
	string str;
	//char symbols[50];
	while (!fin.eof())
	{
		str = "";
		//strcpy_s(symbols, "0");
		//fin >> str; //���������� ������ �� ������� �������
		getline(fin, str); //��������� �� ������� �� �������� �� ��������� ������
		//fin.getline(symbols, 50); // �������� �����
		cout << str << endl;
	}
	fin.close();

	return 0;
}