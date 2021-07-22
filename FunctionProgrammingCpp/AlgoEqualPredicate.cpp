#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include "Point.h"

using namespace std;

/*
* Бибилиотека стандартных шаблонов (STL)
* Алгоритмы
* equal predicate
*/

int AlgoEqualPredicate()
{
	setlocale(LC_ALL, "RU");

	vector<Point> vp1{
		Point(1,2),
		Point(3,2),
		Point(3,0),
		Point(1,0),
	};
	vector<Point> vp2{
		Point(1,2),
		Point(3,2),
		Point(3,0),
		Point(1,0),
	};

	bool result = equal(begin(vp1), end(vp1), begin(vp2), end(vp2),
		[](Point const& p1, Point const& p2)
		{
			return p1.x == p2.x && p1.y == p2.y;
		}
	);
	cout << "Equal = " << result << endl;
	return 0;
}
