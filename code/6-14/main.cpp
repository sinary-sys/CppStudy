#include <iostream>
using namespace std;
void sort(int *array,int &n){
    int *p[20];

}
int main() {
    int  a[20],n;
    cout<<"please input length of number"<<endl;
    cin >>n;
    cout<<"please input number"<<endl;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a,n);
    cout << "your input array is "<<endl;
    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";

    }
    cout <<"The sorted sequence is "<<endl;

    return 0;
}