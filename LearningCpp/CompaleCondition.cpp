#include <iostream>
#define DEBUG 1
#define COUT
#define ASD
using namespace std;

/*
�������� ����������
*/

#ifndef HEADER_H_     // equivalently, #if !defined HEADER_H_
#define HEADER_H_
// ���, ����������� �����, ���������� ������ ���� ��� �� ������� ��������
#endif // HEADER_H_

//���� ����� ��� � ���� ������ ������� #pragma once ����� ������� ��� ���������� ���� ���

int CompileCondition()
{
	setlocale(LC_ALL, "RU");

#ifndef COUT
#error COUT on.
#endif

#ifndef COUT //if not define
	cout << "cout 1" << endl;
#endif
#
#undef ASD // �������� ��������� ����������� #define
#ifdef ASD //if define
	cout << "cout 1" << endl;
#endif

#if DEBUG == 1
	cout << "������ �����" << endl;
#endif // DEBUG

	for (int i = 0; i < 4; i++)
	{
		cout << i << endl;
	}

#if DEBUG == 1
	cout << "����� �����" << endl;
#endif // DEBUG

	return 0;
}