```c++
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
```



```
104 89分.

F:\Github\c++study\code\program\code\Debug\9-5.exe (进程 2076)已退出，返回代码为: 0。
若要在调试停止时自动关闭控制台，请启用“工具”->“选项”->“调试”->“调试停止时自动关闭控制台”。
按任意键关闭此窗口...
```

