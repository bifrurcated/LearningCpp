#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
	��������� ������ catch
*/

void PrintValue(int value) {
	if (value < 0) {
		throw "����� ������ ����!";
	}
	if (value == 0) {
		throw exception("����� ����� ����!");
	}
	if (value == 1) {
		throw 1;
	}
	cout << "���������� = " << value << endl;
}

int SeveralCatch()
{
	setlocale(LC_ALL, "RU");
	try {
		PrintValue(1);
	}
	catch (const std::exception& ex) {
		cout << "���� 1 �� �������: " << ex.what() << endl;
	}
	catch (const char* ex) {
		cout << "���� 2 �� �������: " << ex << endl;
	}
	catch (...) {
		//���� �� ������� �� ��� ������� exception
		//������ ���������� ������ ���� � �����
		cout << "���� 3 ���-�� ����� �� ���!" << endl;
	}
	return 0;
}