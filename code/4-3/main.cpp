/*���빦�ܣ��ж�����
 *
 * */
#include <iostream>
using namespace std;
/*�������ܣ��ж������Ƿ�Ϊ����
 * ���룺number��һ������
 * �����true��������
 *      false:��������
 * */
bool judge_prime_number(int number)
{
    for (int i = number-1; i > 1 ; i--) {
        if (number%i==0)return false;
    }
    return true;
}
//������
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
        cout<< "number������"<<endl;
    else
        cout<< "number��������"<<endl;
    return 0;
}