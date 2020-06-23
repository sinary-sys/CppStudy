// 11-9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class person
{
public:
	person(string n, int a, bool s,string add,string t ):name(n),age(a),sex(s),address(add),tele(t){}
	string name ,address,tele;
	
	int age;
	bool sex;
	
};
class Teacher :public person
{
public:
	Teacher(string n, int a, bool s, string add, string t,string tit):person(n,a,s,add,t),title(tit){}
	string title;
	void display();
};
class Cadre:public person
{public:
	Cadre(string n, int a, bool s, string add, string t, string pos):person(n,a,s,add,t),post(pos){}
	string  post;
};
class Teacher_Cader :public Teacher, public Cadre
{
public:
	Teacher_Cader(string n, int a, bool s, string add, string t, string pos, string tit,int w) :Teacher(n,a,s,add,t,tit),Cadre(n,a,s,add,t,pos),wage(w){}
	int wage;
	void show();
};
void Teacher::display()
{
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "sex: " << sex << endl;
	cout << "title: " << title << endl;
	cout << "address: " << address << endl;
	cout << "tel: " << tele << endl;

}

void Teacher_Cader::show()
{
	display();
	cout << "title: " << title << endl;
	cout << "wage: " << wage << endl;
}

int main()
{
	Teacher_Cader person("ZhangLei", 23, 1, "Beijing", "87891611", "professor", "assitant", 8981);
	person.show();
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
