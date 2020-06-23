// 11-4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Student                        //声明基类
{
public:                             //基类公用成员               
	void get_value();
	void display();
protected:                         //基类保护成员
	int num;
	string  name;
	char sex;
};

void Student::get_value()
{
	cin >> num >> name >> sex;
}

void Student::display()
{
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}

class Student1 : public Student              //声明一个公用派生类
{
public:
	void get_value_1();
	void display1();
private:
	int age;
	string addr;
};

void Student1::get_value_1()
{
	get_value();
	cin >> age >> addr;
}
void Student1::display1()
{
	cout << "num: " << num << endl;         //引用基类的保护成员，合法
	cout << "name: " << name << endl;       //引用基类的保护成员，合法
	cout << "sex: " << sex << endl;         //引用基类的保护成员，合法
	cout << "age: " << age << endl;         //引用派生类的私有成员，合法
	cout << "address: " << addr << endl;    //引用派生类的私有成员，合法
}

int main()
{
	Student1 stud1;                      //stud1是派生类student1类的对象
	stud1.get_value_1();                 //调用派生类对象stud1的公用成员函数get_value_1
	stud1.display1();                   //调用派生类对象stud1的公用成员函数display1
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
