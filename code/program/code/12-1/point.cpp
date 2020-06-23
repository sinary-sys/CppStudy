#include "pch.h"
#include "point.h"
#include <iostream>
using namespace std;
Point::Point(double a, double b)
{
	x = a; y = b;
}
void Point::setPoint(double a, double b)
{
	x = a; y = b;
}
ostream& operator<<(ostream &output, const Point &p)
{
	output << "[" << p.x << ", " << p.y << "]" << endl;
	return output;
}

