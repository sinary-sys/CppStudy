// l-9-11.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
class Student {
public:Student(int n, int a, float s) :num(n), age(a), score(s) {}
	   void total();
	   float average();
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
		cout << "the average score of " << n << " student is " << stu[1].average() << endl;//用stud对象数组调用average函数（非静态成员函数）
		
	
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
