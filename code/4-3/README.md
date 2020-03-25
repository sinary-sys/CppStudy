# 判断一个数是否为质数的三种方法
## (1)直观判断法
最直观的方法，根据定义，因为质数除了1和本身之外没有其他约数，所以判断n是否为质数，根据定义直接判断从2到n-1是否存在n的约数即可。
```
bool judge_prime_number(int number)
{
    for (int i = number-1; i > 1 ; i--) {
        if (number%i==0)return false;
    }
    return true;
}
```
## (2)直观判断法改进
上述判断方法，明显存在效率极低的问题。对于每个数n，其实并不需要从2判断到n-1，我们知道，一个数若可以进行因数分解，那么分解时得到的两个数一定是一个小于等于sqrt(n)，一个大于等于sqrt(n)，据此，上述代码中并不需要遍历到n-1，遍历到sqrt(n)即可，因为若sqrt(n)左侧找不到约数，那么右侧也一定找不到约数。
```
//方法二
bool judge_prime_number1(int number)
{
    for (int i = sqrt(number); i > 1 ; i--) {
        if (number%i==0)return false;
    }
    return true;
}
```
