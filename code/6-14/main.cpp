/**
 *@Description:πÈ≤¢≈≈–Ú
 *@author ÀÔº—Œ∞
 *@time 2020 4 30
 */
#include <iostream>
using namespace std;

int main() {
    int  a[20],n;
    cout<<"please input length of number"<<endl;
    cin >>n;
    cout<<"please input number"<<endl;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    cout << "your input array is "<<endl;
    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";

    }
    cout <<"The sorted sequence is "<<endl;

    return 0;
}