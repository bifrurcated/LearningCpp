#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
	��������� ����������
	throw (�������)
*/

void Foo(int value) {
	if (value < 0) {
		throw exception("����� ������ ����!");
	}
	cout << "���������� = " << value << endl;
}

int main()
{
	setlocale(LC_ALL, "RU");
	try {
		Foo(-55);
	}
	catch (const std::exception& ex) {
		cout << "�� �������: " << ex.what() << endl;
	}
	return 0;
}