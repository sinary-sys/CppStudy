#include <iostream>
#include <cmath>

using namespace std;

double integral(double x_limit, double s_limit, double (*func)(double), int n) {
    double area = 0;
    double dx = -(x_limit - s_limit) / n;
    for (int i = 0; i < n; i++) {
        area = area + func(x_limit + dx * i) * dx;

    }
    return area;
}

int main() {
    int n = 50;
    double a = 0, b = 1;
    double area = 0;
    double (*fun)(double);
    cout << "please input integral floor" << endl;
    cin >> a;
    cout << "please input upper limit of integral" << endl;
    cin >> b;
    cout << "please input quantity of area separated " << endl;
    cin >> n;
    cout << "please select function of integral" << endl;
    cout << "1 sinx" << endl << "2 cosx" << endl << "3 expx" << endl;
    int select = 0;
    cin >> select;
    switch (select) {
        case 1:
            fun = sin;
            break;
        case 2:
            fun = cos;
            break;
        case 3:
            fun = exp;
            break;
        default:
            fun = sin;
            break;
    }

    area = integral(a, b, fun, n);
    cout << area << endl;

    return 0;
}