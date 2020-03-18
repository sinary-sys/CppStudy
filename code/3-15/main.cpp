#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0;
    cout << "请输入第一个数" << endl;
    cin >> a;
    cout << "请输入第二个数" << endl;
    cin >> b;
    if ((a == 0 && b == 0) || a < 0 || b < 0)
        cout << "输入的数据无法求最大公因数与最小公倍数" << endl;
    else {
        if (a < b) {
            int c = 0, d = 0;
            for (int i = a; i >=  1; i--) {
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
            cout << "最大公因数为" << c << endl;
            cout << "最小公倍数为" << d << endl;

        } else {
            int c = 0, d = 0;
            for (int i = b; i >=  1; i--) {
                if (!(a % i) && !(b % i)) {
                    c = i;
                    break;
                }
            }
            for (int j = a; j <= a * b; j++) {
                if (!(j % a) && !(j % b)) {
                    d = j;
                    break;
                }
            }
            cout << "最大公因数为" << c << endl;
            cout << "最小公倍数为" << d << endl;
        }
    }
    return 0;
}