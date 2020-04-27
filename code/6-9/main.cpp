#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void transpose(int (*array)[3]){
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < i; ++j) {
            swap(array[i][j],array[j][i]);
        }
    }
}
int main() {
    int a[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"please input the element of row "<<i+1<< " cliunm "<< j+1<<endl;
            cin>>a[i][j];
        }
    }
    cout<<"original array is"<<endl;
    for (int k = 0; k <3 ; ++k) {
        for (int i = 0; i < 3; ++i) {
            cout<<a[k][i]<<"\t";
        }
        cout<<endl;
    }
    transpose(a);
    cout<<"transposed array is "<<endl;
    for (int k = 0; k <3 ; ++k) {
        for (int i = 0; i < 3; ++i) {
           cout<<a[k][i]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}