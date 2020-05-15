![](https://github.com/sinary-sys/CppStudy/blob/master/pictures/QQ截图20200515203154.png)





```
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
using namespace std;
void input(int *num)       //输入10个数的函数
{
    int i;
    printf("input 10 numbers:");
    for(i=0; i<10; i++){
        scanf("%d", &num[i]);
    }
}
void swap(int *num)
{
    int *max, *min, *p, temp;
    max = min = num;        //开始时使max和min都指向第一个数
    for(p = num+1; p < num+10; p++){
        if(*p > *max)    max = p;    //若p指向的数大于max指向的数，就使max指向p指向的大数
        else if(*p < *min)    min = p;    //若p指向的数小于min指向的数，就使min指向p指向的小数
    }
    temp = num[0];
    num[0] = *min;
    *min = temp;    //将最小数与第一个数num[0]交换
    if(max == num)  max = min;  //若max和num相等，表示第一个数是最大数，则使max指向当前的最大数
    temp = num[9];
    num[9] = *max;
    *max = temp;    //将最大数与最后一个数num[9]交换
}
void output(int *num)
{
    int *p;
    printf("Now, they are:");
    for(p = num; p < num+10; p++){
        printf("%d ", *p);
    }
    printf("\n");
}
int main()
{
    int num[10];
    input(num);
    swap(num);
    output(num);
    return 0;
}
```

