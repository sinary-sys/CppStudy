// l-9-13-test14-4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

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

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
