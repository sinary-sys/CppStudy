#include <iostream>
using namespace std;
int main() {
    const int index=20;
    int a=1,b=0;
    for (int i = 1; i <= index; i++) {
        for (int j = 1; j <= i; j++) {
            a=a*j;
        }
        b=b+a;
        a=1;
    }
    cout<<b;
    return 0;
}