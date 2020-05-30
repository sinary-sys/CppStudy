分析下列程序的结果，t1初始化时的值？

```
class Time

{public:

 Time()

 {hour = 4; minute = 5; sec = 6;}

 private:

 int hour = 1, minute = 2, sec = 3;

};

int main()

{Time t1;

 return 0;}
```

初始化为构造函数中的赋值

```
F:\Github\c++study\code\9-0\cmake-build-debug\9_0.exe
4       5       6

进程已结束，退出代码 0
```

