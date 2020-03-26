#include <iostream>

using namespace std;


double func(double x) //函数
{
    return 1 * x * x * x + 2 * x * x + 3 * x - 4;
}

double func1(double x) //导函数
{
    return 3 * 1 * x * x + 2 * 2 * x + 3;
}

int Newton(double &x, double precision, int maxcyc) //迭代次数
{
    double x1, x0;

    x0 = x;
    for (int k = 0; k < maxcyc; k++) {
        if (func1(x0) == 0.0)//若通过初值，函数返回值为0
        {
            cout << "迭代过程中导数为0!" << endl;

            return 0;
        }
        x1 = x0 - func(x0) / func1(x0);//进行牛顿迭代计算
        if (fabs(x1 - x0) < precision || fabs(func(x1)) < precision) //达到结束条件
        {
            x = x1; //返回结果
            return 1;
        } else //未达到结束条件
        {
            x0 = x1; //准备下一次迭代
        }
    }

    cout << "迭代次数超过预期！" << endl;//迭代次数达到，仍没有达到精度
    return 0;
}

int main() {
    double x, precision;
    int maxcyc = 0;


    cout << "输入初始值x0" << endl;
    cin >> x;
    cout << "输入最大迭代次数" << endl;
    cin >> maxcyc;
    cout << "迭代要求的精度" << endl;
    cin >> precision;
    if (Newton(x, precision, maxcyc) == 1) //若函数返回值为1
    {
        cout << "该点附近的根为" << x << endl;
    } else //若函数返回值为0
    {
        cout << "迭代失败" << endl;
    }
    return 0;
}
