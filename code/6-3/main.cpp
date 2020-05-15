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
    max = min = num;        //开始时使max和min都指向第一个数
    for (p = num + 1; p < num + 10; p++) {
        if (*p > *max) max = p;    //若p指向的数大于max指向的数，就使max指向p指向的大数
        else if (*p < *min) min = p;    //若p指向的数小于min指向的数，就使min指向p指向的小数
    }
    temp = num[0];
    num[0] = *min;
    *min = temp;    //将最小数与第一个数num[0]交换
    if (max == num) max = min;  //若max和num相等，表示第一个数是最大数，则使max指向当前的最大数
    temp = num[9];
    num[9] = *max;
    *max = temp;    //将最大数与最后一个数num[9]交换
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