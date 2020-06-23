#pragma once
#include "Circle.h"
class Cylinder : public Circle
{
public:
	Cylinder(double x = 0, double y = 0, double r = 0, double h = 0);
	void setHeight(double);
	double getHeight() const;
	double area() const;
	double volume() const;
	friend ostream& operator<<(ostream &, const Cylinder &);
protected:
	double height;
};

