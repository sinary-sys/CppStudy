### 第14次课课堂练习3  

### 【简答题】

#### 如果在例9.11中average不是静态成员函数，程序能否通过编译？需要作什么修改？为什么要用静态成员函数？请分析其理由。

- 不能通过编译，因为调用变得非法，使用对象名.函数名调用
- 不将average函数定义为静态成员函数是行的。程序能通过编译。修改的代码如下。之所以用静态成员函数是因为，引用静态成员函数average函数可以用类名或者对象名，而如果是非静态成员函数average只能实例化对象调用函数average，如果没有定义类的对象，那么可以用类名调用静态成员函数average函数，而对象名因为没有建立所以不能调用，尽管没有建立对象的调用毫无意义，但是静态成员函数的使用，提高了语句的逻辑性和可读性。

#### 原始程序

```c++
#include "pch.h"
#include <iostream>
using namespace std;
class Student {
public:Student(int n, int a, float s) :num(n), age(a), score(s) {}
	   void total();
	   static  float average();
private:int num;
		int age;
		float score;
		static float sum;
		static int count;
};
int main() {
	Student stu[3] = {
		Student(1001,18,70),
		Student(1002,19,78),
		Student(1003,20,98)
	};
	int n;
	cout << "please input the number of students : ";
	cin >> n;
	for (int i = 0; i < n; i++)
		stu[i].total();
		cout << "the average score of " << n << " student is " << Student::average() << endl;
		
	

	return 0;

}
void Student::total() {
	sum += score;
	count++;
}
float Student::average() {
	return (sum / count);
}
float Student::sum = 0;
int Student::count = 0;
```

### 修改后程序

```c++
#include "pch.h"
#include <iostream>
using namespace std;
class Student {
public:Student(int n, int a, float s) :num(n), age(a), score(s) {}
	   void total();
	   static  float average();
private:int num;
		int age;
		float score;
		static float sum;
		static int count;
};
int main() {
	Student stu[3] = {
		Student(1001,18,70),
		Student(1002,19,78),
		Student(1003,20,98)
	};
	int n;
	cout << "please input the number of students : ";
	cin >> n;
	for (int i = 0; i < n; i++)
		stu[i].total();
		cout << "the average score of " << n << " student is " << Stu[1].average() << endl;//用stud对象数组调用average函数（非静态成员函数）
		
	

	return 0;

}
void Student::total() {
	sum += score;
	count++;
}
float Student::average() {
	return (sum / count);
}
float Student::sum = 0;
int Student::count = 0;
```

