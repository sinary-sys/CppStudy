// test-15-1-9-4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include<iostream>
#include<cstring>
using namespace std;

class String
{
public:
	String()//定义默认构造函数 
	{
		p = NULL;
	}
	String(const char *str);//声明构造函数 
	void display();//声明输出p所指向的字符串函数 
    bool operator>(String &string2);//声明运算符重载函数为友元函数 
	bool operator<( String &string2);//声明运算符重载函数为友元函数 
	bool operator==( String &string2);//声明运算符重载函数为友元函数 
private:
	const char *p;//字符型指针，用于指向字符串 
};

String::String(const char *str)//定义构造函数 
{
	p = str;//使p指向形参字符串 
}

void String::display()//定义输出p所指向的字符串函数 
{
	cout << p;
}

bool String:: operator > (String &string2)//对运算符">"重载 
{
	if (strcmp(p, string2.p) > 0)
		return true;
	else
		return false;
}

bool String:: operator<(String &string2)//对运算符"<"重载 
{
	if (strcmp(p, string2.p) < 0)
		return true;
	else
		return false;
}

bool String:: operator==( String &string2)//对运算符"=="重载 
{
	if (strcmp(p, string2.p) == 0)
		return true;
	else
		return false;
}

void compare(String &string1, String &string2)
{
	if ((string1> string2) == 1)
	{
		string1.display();
		cout << ">";
		string2.display();
		cout << endl;
	}
	else if ((string1<string2) == 1)
	{
		string1.display();
		cout << "<";
		string2.display();
		cout << endl;
	}
	else if ((string1==string2) == 1)
	{
		string1.display();
		cout << "==";
		string2.display();
		cout << endl;
	}
}

int main()
{
	String string1("Hello"), string2("Book"), string3("Computer"), string4("Hello");//定义对象 
	compare(string1, string2);
	compare(string2, string3);
	compare(string1, string4);
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
