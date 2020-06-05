### 习题 9.8 修改第6题的程序，增加一个fun函数，改写main函数。改为在fun函数中调用change和display函数。在fun函数中使用对象的引用（Student &）作为形参。

```C++
#include "pch.h"
#include <iostream>
using namespace std;
class Student
{
public:
	Student(int n, float s) :num(n), score(s) {}
	void change(int n, float s)
	{
		num = n;
		score = s;
	}
	void display()
	{
		cout << num << " " << score << endl;
	}
private:
	int num;
	float score;
};
void fun(Student &ss)
{
	ss.display();
	ss.change(101, 80.5);
	ss.display();
}
int main()
{
	Student stud(101, 78.5);
	fun(stud);
	system("pause");
	return 0;
}
```



```
101 78.5
101 80.5
请按任意键继续. . .
```

