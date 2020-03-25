#判断一个数是否为质数的三种方法
##(1)直观判断法
最直观的方法，根据定义，因为质数除了1和本身之外没有其他约数，所以判断n是否为质数，根据定义直接判断从2到n-1是否存在n的约数即可。

## (2)直观判断法改进
上述判断方法，明显存在效率极低的问题。对于每个数n，其实并不需要从2判断到n-1，我们知道，一个数若可以进行因数分解，那么分解时得到的两个数一定是一个小于等于sqrt(n)，一个大于等于sqrt(n)，据此，上述代码中并不需要遍历到n-1，遍历到sqrt(n)即可，因为若sqrt(n)左侧找不到约数，那么右侧也一定找不到约数。
##(3)质数规律判断法
首先看一个关于质数分布的规律：大于等于5的质数一定和6的倍数相邻。例如5和7，11和13,17和19等等；

证明：令x≥1，将大于等于5的自然数表示如下：

······6x-2，6x-1，6x，6x+1，6x+2，6x+3，6x+4，6x+5，6x+6，6x+7······

也就是

······2(3x-1)，6x-1，6x，6x+1，2(3x+1)，3(2x+1)，2(3x+2)，6x+5，6(x+1)，6(x+1)+1······

可以看到，不在6的倍数两侧，即6x两侧的数为6x+2，6x+3，6x+4，由于2(3x+1)，3(2x+1)，2(3x+2)，所以它们一定不是素数，再除去6x本身，显然，素数要出现只可能出现在6x的相邻两侧。这里要注意的一点是，在6的倍数相邻两侧并不是一定就是质数。