```C++
#include "pch.h"
#include <iostream>
using namespace std;
class Time;
class Date
{
public:
	Date(int m, int d, int y) :month(m), day(d), year(y) {}
	void display(Time &t);
	
private:
	int month;
	int day;
	int year;
};
class Time
{
public:
	Time(int h, int m, int s): hour(h),minute(m),sec(s){};
	friend void Date::display(Time &);
private:
	int hour;
	int minute;
	int sec;

};
void Date::display(Time& t)
{
	cout << month << "/" << day << "/" << year << endl;
	cout << t.hour << " : " << t.minute << " : " << t.sec << endl;
}
int main(){
	Time t1(10,13,56);
	Date d1(12, 25, 2004);
	d1.display(t1);
	return 0;
}
```

