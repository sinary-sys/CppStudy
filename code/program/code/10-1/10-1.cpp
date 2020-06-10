// 10-1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include<iostream>
using namespace std;
class Complex {
public:
	Complex() { real = 0; imag = 0; };
	Complex(double r, double i) :real(r), imag(i) { };
	//这里必须定义为静态成员函数 
	static Complex addition(Complex &c1, Complex &c2);
	void display();
private:
	double real;
	double imag;
};
Complex Complex::addition(Complex &c1, Complex &c2) {
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
void Complex::display() {
	cout << "(" << real << "," << imag << "i)" << endl;
}
Complex operator +(Complex &c1, Complex &c2) {
	return Complex::addition(c1, c2);
}
int main() {
	Complex c1(1, 2), c2(2, 3), c3, c4(3, 4);
	c2 = c1 + c2;
	c2.display();
	c4 = c1 + c3;
	c4.display();
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
