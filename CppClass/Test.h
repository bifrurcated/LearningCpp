#pragma once
class Point; //������-�� ������ ��� ��������
class Test
{
private:
	int Data = 0;
	
	friend void ChangeX(Point& point, Test& testValue);
};