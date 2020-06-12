// text-15-2-10-6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"

#include<iostream>

using namespace std;

class Time

{

public:

	Time() { minute = 0; sec = 0; }

	Time(int m, int s) :minute(m), sec(s) {}

	friend Time operator++(Time t);   //声明前置自增运算符"++"重载函数，友元函数方法

	friend Time operator++(Time t, int); //声明后置自增运算符"++"重载函数，友元函数方法

	void display() { cout << minute << "分" << sec << "秒" << endl; }

private:

	int minute;

	int sec;

};



Time operator++(Time t)           //定义前置自增运算符"++"重载函数

{

	if (++t.sec >= 60)

	{

		t.sec -= 60;

		++t.minute;

	}

	return t;

}

Time operator++(Time t, int)        //定义后置自增运算符"++"重载函数

{

	Time temp = t;

	++t;

	return temp;

}



int main()

{

	Time time1(34, 59), time2;

	cout << "time1:\t";

	time1.display();

	++time1;

	cout << "++time1:";

	time1.display();

	time2 = time1++;

	cout << "time1++:";

	time1.display();

	cout << "time2:\t";

	time2.display();

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
