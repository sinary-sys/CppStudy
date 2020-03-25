/*代码功能：判断素数
 *
 * */
#include <iostream>
using namespace std;
/*函数功能：判断输入是否为质数
 * 输入：number：一个整数
 * 输出：true：是质数
 *      false:不是质数
 * */
bool judge_prime_number(int number)
{
    for (int i = number-1; i > 1 ; i--) {
        if (number%i==0)return false;
    }
    return true;
}
//方法二
bool judge_prime_number1(int number)
{
    for (int i = sqrt(number); i > 1 ; i--) {
        if (number%i==0)return false;
    }
    return true;
}

int main() {
    int number=0;
    cin>>number;
    if(judge_prime_number1(number))
        cout<< "number是质数"<<endl;
    else
        cout<< "number不是质数"<<endl;
    return 0;
}