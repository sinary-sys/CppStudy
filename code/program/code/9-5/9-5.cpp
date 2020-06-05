﻿// 9-5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include<iostream>  
using namespace std;
class Student
{
public:
	Student(int n = 101, int g = 45) :num(n), grade(g) {};
	void display();
	int num;
	int grade;
};

void Student::display()
{
	cout << num << " " << grade << "分." << endl;
}
void max(Student *p)
{
	int i, max_g = 0, max_i = 0;
	for (i = 0; i < 5; i++)
		if ((p + i)->grade > max_g)
		{
			max_g = (p + i)->grade;
			max_i = i;
		}
	(p + max_i)->display();
}
int main()
{

	Student s[5] = {
	Student(),
	Student(102,41),
	Student(103,68),
	Student(104,89),
	Student(105)
	};
	Student *p;
	p = &s[0];
	max(p);

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
