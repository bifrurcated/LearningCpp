#include <iostream>

using namespace std;

/*��������� ��������*/

int TernaryOperator()
{
    setlocale(LC_ALL, "RU");
    int a = 4;
    a++; // ������� �������� ��������������� � ����� ����������
    int b = 6;
    a + b;//�������� �������� ������ ��� �������������� � ����� �����������
    if (true) {}
    else {} // ?: ��� ��������� �������� ��������������� � 3 �����������
    a--;
    a > 4 ? cout << "a ������ 4" << endl : a < 4 ? cout << "a ������ 4" << endl : cout << "a ����� 4" << endl;
    return 0;
}