#### 习题 9.2 写一个函数days， 实现第1题的计算。由主函数将年、月、日传递给days函数，计算后将日子数传回主函数输出。

参考代码

```
#include <stdio.h>
#include <stdlib.h>
struct count_day
{
    int year;
    int month;
    int day;
};
int days(struct count_day done);
int main()
{
    struct count_day dd;
    printf("Please enter Year, Month, Day: ");
    scanf("%d %d %d", &dd.year, &dd.month, &dd.day);
    printf("%d-%d-%d is No.%d days!\n", dd.year, dd.month, dd.day, days(dd));
	system("pause");
    return 0;
}
int days(struct count_day done)
{
    int i, m[12], sum;
    for (i=0; i<6; i++){
		if(i==0||i==2||i==4||i==6||i==7||i==9||i==11)
			m[i]=31;
		else
			m[i]=30;
	}
    (!(done.year%4)&&done.year%100!=0)||!(done.year%400) ? m[1]=29 : m[1]=28;
    for (i=0, sum=0; i<done.month-1; sum+=m[i++]);
    return sum+=done.day;
}
```

```
代码结果验证

F:\Github\c++study\code\7-2\cmake-build-debug\7_2.exe
please input data of year
2015
please input data of mouth
12
please input data of day
1
your date of days is 335

进程已结束，退出代码 0

F:\Github\c++study\code\7-2\cmake-build-debug\7_2.exe
please input data of year
2012
please input data of mouth
12
please input data of day
1
your date of days is 336

进程已结束，退出代码 0

please input data of year
2020
please input data of mouth
1
please input data of day
1
your date of days is 1

进程已结束，退出代码 0
```

