/*���빦�ܣ���������������С���������������
 *���ߣ����ΰ
 * �༭ʱ�䣺2020��3��18��23:06:55
 * */
#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0;
    cout << "�������һ����" << endl;
    cin >> a;
    cout << "������ڶ�����" << endl;
    cin >> b;
    if ((a == 0 && b == 0) || a < 0 || b < 0)
        cout << "����������޷��������������С������" << endl;
    else {
        if (a > b) {
            int temp = a;//����a��b��
            a = b;
            b = temp;

        }
        int c = 0, d = 0;
        for (int i = a; i >= 1; i--) {
            if (!(a % i) && !(b % i)) {
                c = i;
                break;
            }
        }
        for (int j = b; j <= a * b; j++) {
            if (!(j % a) && !(j % b)) {
                d = j;
                break;
            }
        }
        cout << "�������Ϊ" << c << endl;
        cout << "��С������Ϊ" << d << endl;


    }
    return 0;
}