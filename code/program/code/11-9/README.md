习题 11.9 分别定义Teacher（教师）类和Cadre（干部）类，采用多重继承方式由这两个类派生出新类Teacher_Cadre（教师兼干部）类。
1. 在两个基类中都包含姓名、年龄、性别、地址、电话等数据成员。
2. 在Teacher类中还包含数据成员title（职称），在Cadre类中还包含数据成员post（职务），在Teacher_Cadre类中还包含数据成员wages（工资）。
3. 对两个基类中的姓名、年龄、性别、地址、电话等数据成员用相同的名字，在引用这些数据成员时，指定作用域。
4. 在类体中声明成员函数，在类外定义成员函数。
5. 在派生类Teacher_Cadre的成员函数show中调用Teacher类中的display函数，输出姓名、年龄、性别、职称、地址、电话，然后再用cout语句输出职务与工资。


```C++
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
```

```
name: ZhangLei
age: 23
sex: 1
title: assitant
address: Beijing
tel: 87891611
title: assitant
wage: 8981

F:\Github\c++study\code\program\code\Debug\11-9.exe (进程 15468)已退出，返回代码为: 0。
若要在调试停止时自动关闭控制台，请启用“工具”->“选项”->“调试”->“调试停止时自动关闭控制台”。
按任意键关闭此窗口...
```

