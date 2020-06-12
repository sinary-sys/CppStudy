### 论述题

自增运算符++的重载

（1）运行以下程序，并分析结果。

```c++
//例10.6 对Time类重载自增运算符++，友元函数法

#include "pch.h"

#include<iostream>

using namespace std;

class Time

{

public:

	Time() { minute = 0; sec = 0; }

	Time(int m, int s) :minute(m), sec(s) {}

	friend Time operator++(Time &t);   //声明前置自增运算符"++"重载函数，友元函数方法

	friend Time operator++(Time &t, int); //声明后置自增运算符"++"重载函数，友元函数方法

	void display() { cout << minute << "分" << sec << "秒" << endl; }

private:

	int minute;

	int sec;

};



Time operator++(Time &t)           //定义前置自增运算符"++"重载函数

{

	if (++t.sec >= 60)

	{

		t.sec -= 60;

		++t.minute;

	}

	return t;

}

Time operator++(Time &t, int)        //定义后置自增运算符"++"重载函数

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
```

```
time1:  34分59秒 //time1初始化直接打印
++time1:35分0秒  //对time1前置++，秒加了1
time1++:35分1秒  //time1++
time2:  35分0秒	//time1自+之前先返回加之前的值给time2，然后在自+

F:\Github\c++study\code\program\code\Debug\text-15-2-10-6.exe (进程 21800)已退出，返回代码为: 0。
若要在调试停止时自动关闭控制台，请启用“工具”->“选项”->“调试”->“调试停止时自动关闭控制台”。
按任意键关闭此窗口...
```

（2）将以上程序中前置和后置自增重载函数的参数Time &t改为Time t（注意函数声明和函数定义中都要修改），分析程序的结果，并讨论对于前置和后置自增运算符的重载能否将参数改为Time t，分析原因？

结果分析：

- [ ] i++的意思是 i = i + 1 
- [ ] ++i的意思是 i = i + 1 
- [ ] 如果采用形参传递的话，time1本身不会改变 不符合`“++”`运算符的定义

```c++
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
```



```
time1:  34分59秒
++time1:34分59秒
time1++:34分59秒
time2:  34分59秒

F:\Github\c++study\code\program\code\Debug\text-15-2-10-6.exe (进程 1472)已退出，返回代码为: 0。
若要在调试停止时自动关闭控制台，请启用“工具”->“选项”->“调试”->“调试停止时自动关闭控制台”。
按任意键关闭此窗口...
```

