// 12-1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "point.h"
#include "Circle.h"
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"
using namespace std;
int main()
{
	Cylinder cy1(3.5, 6.4, 5.2, 10);
	cout << "\noriginal cylinder:\nx=" << cy1.getX() << ", y=" << cy1.getY() << ", r="
		<< cy1.getRadius() << ", h=" << cy1.getHeight() << "\narea=" << cy1.area()
		<< ", volume=" << cy1.volume() << endl;
	cy1.setHeight(15);
	cy1.setRadius(7.5);
	cy1.setPoint(5, 5);
	cout << "\nnew cylinder:\n" << cy1;
	Point &pRef = cy1;
	cout << "\npRef as a Point:" << pRef;
	Circle &cRef = cy1;
	cout << "\ncRef as a Circle:" << cRef;
	system("pause");
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
