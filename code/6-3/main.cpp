#include <iostream>

using namespace std;

void input(int a[]) {
    for (int i = 0; i < 10; ++i) {
        cout << "please input number of " << i + 1 << endl;
        cin >> a[i];
    }
}

void swap(int *num) {
    int *max, *min, *p, temp;
    max = min = num;        //��ʼʱʹmax��min��ָ���һ����
    for (p = num + 1; p < num + 10; p++) {
        if (*p > *max) max = p;    //��pָ���������maxָ���������ʹmaxָ��pָ��Ĵ���
        else if (*p < *min) min = p;    //��pָ�����С��minָ���������ʹminָ��pָ���С��
    }
    temp = num[0];
    num[0] = *min;
    *min = temp;    //����С�����һ����num[0]����
    if (max == num) max = min;  //��max��num��ȣ���ʾ��һ���������������ʹmaxָ��ǰ�������
    temp = num[9];
    num[9] = *max;
    *max = temp;    //������������һ����num[9]����
}

void output(int a[]) {
    for (int i = 0; i < 10; ++i) {
        cout << a[i] << "\t";
    }
}

int main() {
    int a[10];
    input(a);
    swap(a);
    output(a);
    return 0;
}