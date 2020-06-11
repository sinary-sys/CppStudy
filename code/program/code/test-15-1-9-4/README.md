### 利用成员函数的方法重载运算符“==”、“<”、“>”，用于两个字符串的等于、小于和大于的比较运算（参考例10.4）。

```C++
#include "pch.h"
\#include<iostream>
\#include<cstring>
using namespace std;

class String
{
public:
   String()//定义默认构造函数 
   {
     p = NULL;
   }
   String(const char *str);//声明构造函数 
   void display();//声明输出p所指向的字符串函数 
  bool operator>(String &string2);//声明运算符重载函数为友元函数 
   bool operator<( String &string2);//声明运算符重载函数为友元函数 
   bool operator==( String &string2);//声明运算符重载函数为友元函数 
private:
   const char *p;//字符型指针，用于指向字符串 
};

String::String(const char *str)//定义构造函数 
{
   p = str;//使p指向形参字符串 
}

void String::display()//定义输出p所指向的字符串函数 
{
   cout << p;
}

bool String:: operator > (String &string2)//对运算符">"重载 
{
   if (strcmp(p, string2.p) > 0)
     return true;
   else
     return false;
}

bool String:: operator<(String &string2)//对运算符"<"重载 
{
   if (strcmp(p, string2.p) < 0)
     return true;
   else
     return false;
}

bool String:: operator==( String &string2)//对运算符"=="重载 
{
   if (strcmp(p, string2.p) == 0)
     return true;
   else
     return false;
}

void compare(String &string1, String &string2)
{
   if ((string1> string2) == 1)
   {
     string1.display();
     cout << ">";
     string2.display();
     cout << endl;
   }
   else if ((string1<string2) == 1)
   {
     string1.display();
     cout << "<";
     string2.display();
     cout << endl;
   }
   else if ((string1==string2) == 1)
   {
     string1.display();
     cout << "==";
     string2.display();
     cout << endl;
   }
}

int main()
{
   String string1("Hello"), string2("Book"), string3("Computer"), string4("Hello");//定义对象 
   compare(string1, string2);
   compare(string2, string3);
   compare(string1, string4);
   return 0;
}
```

