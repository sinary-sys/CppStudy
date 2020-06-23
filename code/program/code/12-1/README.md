### 习题 12.1 在例12.1程序基础上作一些修改。定义Point类，由Point类派生出Circle类，再由Circle类派生出Cylinder类。将类的定义部分分别作为3个头文件，对它们的成员函数的声明部分分别作为3个源文件，在主函数中用#include命令把它们包含进来，形成一个完整的程序，并上机运行。

### Point.h头文件

```C++
#include <iostream>
using namespace std;
class Point
{
public:
	Point(double x=0, double y=0);
	void setPoint(double, double);
	double getX() const{return x;}
	double getY() const{return y;}
	friend ostream & operator<<(ostream &, const Point &);
protected:
	double x, y;
};
```

### Circle.h头文件

```C++
class Circle: public Point
{
public:
	Circle (double x=0, double y=0, double r=0);
	void setRadius(double);
	double getRadius() const;
	double area() const;
	friend ostream& operator<<(ostream &, const Circle &);
protected:
	double radius;
};
```


### Cylinder.h头文件

```C++
class Cylinder: public Circle
{
public:
	Cylinder(double x=0, double y=0, double r=0, double h=0);
	void setHeight(double);
	double getHeight() const;
	double area() const;
	double volume() const;
	friend ostream& operator<<(ostream &, const Cylinder &);
protected:
	double height;
};
```



### PointFun函数

```C++
#include <iostream>
#include "Point.h"
using namespace std;
Point::Point(double a, double b)
{
	x=a; y=b;
}
void Point::setPoint(double a, double b)
{
	x=a; y=b;
}
ostream& operator<<(ostream &output, const Point &p)
{
	output<<"["<<p.x<<", "<<p.y<<"]"<<endl;
	return output;
}
```



### CircleFun函数

```C++
#include <iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;
Circle::Circle(double a, double b, double r): Point(a, b), radius(r){}
void Circle::setRadius(double r){radius=r;}
double Circle::getRadius() const { return radius;}
double Circle::area() const {return 3.14159*radius*radius;}
ostream& operator<<(ostream &output, const Circle &c)
{
	output<<"Center=["<<c.x<<", "<<c.y<<"], r="<<c.radius<<", area="<<c.area()<<endl;
	return output;
}
```



### CylinderFun函数

```C++
#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"
using namespace std;
Cylinder::Cylinder(double a, double b, double r, double h)
	:Circle(a, b, r), height(h){}
void Cylinder::setHeight(double h) {height=h;}
double Cylinder::getHeight() const {return height;}
double Cylinder::area() const {return 2*Circle::area()+2*3.14159*radius*height;}
double Cylinder::volume() const {return Circle::area()*height;}
ostream& operator<<(ostream &output, const Cylinder &cy)
{
	output<<"Center=["<<cy.x<<", "<<cy.y<<"], r="<<cy.radius<<", h="<<cy.height
		<<"\narea="<<cy.area()<<", volume="<<cy.volume()<<endl;
	return output;
}
```



### main函数

```C++
#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"
using namespace std;
int main()
{
	Cylinder cy1(3.5, 6.4, 5.2, 10);
	cout<<"\noriginal cylinder:\nx="<<cy1.getX()<<", y="<<cy1.getY()<<", r="
		<<cy1.getRadius()<<", h="<<cy1.getHeight()<<"\narea="<<cy1.area()
		<<", volume="<<cy1.volume()<<endl;
	cy1.setHeight(15);
	cy1.setRadius(7.5);
	cy1.setPoint(5, 5);
	cout<<"\nnew cylinder:\n"<<cy1;
	Point &pRef=cy1;
	cout<<"\npRef as a Point:"<<pRef;
	Circle &cRef=cy1;
	cout<<"\ncRef as a Circle:"<<cRef;
	system("pause");
	return 0;
}
```


