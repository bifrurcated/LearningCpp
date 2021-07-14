#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
	��������� ���������� try catch
*/

int ExceptionHandling()
{
	setlocale(LC_ALL, "RU");

	string path = "TryCatch.txt";
	ifstream fin; //�� ��������� ��������� ���������� � ������ ���������, ����� � �������� ����� ������� ����� exception � �������� ���� ��������� ifstream::badbit | ifstream::failbit
	fin.exceptions(ifstream::badbit | ifstream::failbit);
	try
	{
		cout << "������� �������� �����..." << endl;
		fin.open(path);
		cout << "���� ������� ������!" << endl;
	}
	catch (const ifstream::failure& ex)
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "������ �������� �����!" << endl;
	}
	return 0;
}