*1*【简答题】

检查下面的程序，找出其中的错误，使之能正常运行。

要求：

（1）const Time t1(10, 13, 56);和const Time t2;语句不改。

（2）逐条错误说明原因并改正。

（3）如何使用const关键字重载get_time成员函数，实现为常对象和非常对象调用函数的不同版本？



```c++
#include<iostream>

using namespace std;



class Time

{

public:

​	Time(int, int, int);

​	void get_time();

​	int hour;

​	int minute;

​	int sec;

};



Time::Time(int h, int m, int s) :hour(h), minute(m), sec(s){}

void Time::get_time()

{

​	cout << hour << ":" << minute << ":" << sec << endl;

}



int main()

{

	const Time t1(10, 13, 56);	

	t1.get_time();				

	t1.hour = 1;		

	int *p1 = &t1.hour;			

	cout << *p1 << endl;		

	Time *p2 = &t1;				

	p2->get_time();				

	const Time t2;

	t2.get_time();



}
```

### 修改后的程序

```c++
#include<iostream>

using namespace std;
class Time {
public:
    Time(int, int, int);
    void get_time();
    int hour;
    int minute;
    int sec;

};


Time::Time(int h, int m, int s) : hour(h), minute(m), sec(s) {}

void Time::get_time() {

    cout << hour << ":" << minute << ":" << sec << endl;

}


int main() {

    const Time t1(10, 13, 56);

   // t1.get_time();//const对象的 非const成员函数不能调用

    //t1.hour = 1;//const对象的数据成员值不可以直接改变

    //int *p1 = &t1.hour;//const变量只能由const指针指向它

    //cout << *p1 << endl;

    //Time *p2 = &t1;//非const指针只能指向非const对象

   // p2->get_time();

    //const Time t2;//const对象初始化需要初始化变量

    //t2.get_time();


}
```

### 第三问的const函数重载

```c++
#include<iostream>

using namespace std;

class Time {
public:
    Time(int, int, int);

    void get_time();

    void get_time() const;

    int hour;
    int minute;
    int sec;

};


Time::Time(int h, int m, int s) : hour(h), minute(m), sec(s) {}

void Time::get_time() {

    cout << hour << ":" << minute << ":" << sec << endl;

}

void Time::get_time() const {

    cout << hour << ":" << minute << ":" << sec << endl;

}


int main() {

    const Time t1(10, 13, 56);
    int a = t1.sec;
    t1.get_time();
    const Time *p = &t1;
    a = p->sec;
    // t1.get_time();//const对象的 非const成员函数不能调用

    //t1.hour = 1;//const对象的数据成员值不可以直接改变

    //int *p1 = &t1.hour;//const变量只能由const指针指向它

    //cout << *p1 << endl;

    //Time *p2 = &t1;//非const指针只能指向非const对象

    // p2->get_time();

    //const Time t2;//const对象初始化需要初始化变量

    //t2.get_time();


}
```