﻿#pragma once
#include "point.h"
class Circle : public Point
{
public:
	Circle(double x = 0, double y = 0, double r = 0);
	void setRadius(double);
	double getRadius() const;
	double area() const;
	friend ostream& operator<<(ostream &, const Circle &);
protected:
	double radius;
};
