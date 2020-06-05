## 9-2

```
10/13/2005
12/30/2005
10/1/2005
1/1/2005
```

## 9-3

```c++
#include "pch.h"
#include <iostream>
using namespace std;
class Date
{
public:Date(int m,int d,int y):month(m),day(d),year(y){};
	   Date(int = 1, int = 1);
	  

	void display()
	{
		cout << month << "/" << day << "/" << year << endl;
	}

private:int month;
		int day;
		int year;
};
Date :: Date(int m,int d) : month(m),day(d)
{
	year = 2005;
}
int main()
{
	Date d1(10, 13, 2005);
	Date d2(12, 30);
	Date d3(10);
	Date d4;
	d1.display();
	d2.display();
	d3.display();
	d4.display();
}
```



```
10/13/2005
12/30/2005
10/1/2005
1/1/2005
```

