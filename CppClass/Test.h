#pragma once
class Point; //почему-то только так работает
class Test
{
private:
	int Data = 0;
	
	friend void ChangeX(Point& point, Test& testValue);
};