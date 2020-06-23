#### 修改例11.3的程序，改为公用继承方式。上机调试程序，使之能正确运行并得到正确结果。对这两种继承方式做分析比较，考虑在什么情况下二者不能互相替换。 

```C++
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
```



```
01
11
1
12
44
num: 1
name: 11
sex: 1
age: 12
address: 44

F:\Github\c++study\code\program\code\Debug\11-4.exe (进程 17044)已退出，返回代码为: 0。
若要在调试停止时自动关闭控制台，请启用“工具”->“选项”->“调试”->“调试停止时自动关闭控制台”。
按任意键关闭此窗口...
```

