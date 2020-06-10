### 10.1  定义一个复数类Complex，重载运算符“ + ”，使之能用于负数的加法运算。将运算符重载为 非成员、非友元 的普通函数。编程序，求两个复数的和。

```C++
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
```

```
(3,5i)
(1,2i)

F:\Github\c++study\code\program\code\Debug\10-1.exe (进程 10420)已退出，返回代码为: 0。
若要在调试停止时自动关闭控制台，请启用“工具”->“选项”->“调试”->“调试停止时自动关闭控制台”。
按任意键关闭此窗口...
```

