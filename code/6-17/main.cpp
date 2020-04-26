#include <iostream>

using namespace std;

int strcmp(char *p1, char *p2) {
    int index=0;//记录相同字符的个数
    for (int i = 0; i <20 ; i++) {
        if(*(p1+i)==*(p2+i)){
            index++;
        } else{
            return *(p1+i) -*(p2+i);//如果遇到第一个不同就返回
        }
    }
    if(index==20)return 0;

    return index;
}

int main() {
    char s1[20],s2[20];
    cout<<"please input string s1"<<endl;
    cin>>s1;
    cout<<"please input string s2"<<endl;
    cin>>s2;
    cout<<"your input string is s1="<<s1<<" "<<"s2="<<s2<<endl;
    int a= strcmp(s1,s2);
    cout<<a;

    return 0;
}