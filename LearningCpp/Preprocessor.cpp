#include <iostream>

#define PI 3.14
#define tab "\t"
#define SQUARE(x,y)((x)*(y))

using namespace std;

/*
������������ ���������� ���-���� �� ���������� ���
#include ���������� ����������
#define �������, ���������������
*/

int Preprocessor()
{
    setlocale(LC_ALL, "RU");

    cout << SQUARE(PI, 2) << endl;

    return 0;
}