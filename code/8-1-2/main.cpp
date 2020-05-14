/*  描述 ：8-1将set_time和show_time函数处理为普通函数
 *  作者：孙佳伟
 *  时间：2020年5月14日14:46:18
 * */
#include <iostream>
using namespace std;
class Time{
public:
    int hour,minute,sec;
};
void set_time(Time &t){
    cin>>t.hour>>t.minute>>t.sec;
};
void show_time(Time t){
    cout<<t.hour<<" : "<<t.minute<<" : "<< t.sec<<endl;
}
int main() {
    Time t;
    set_time(t);
    show_time(t);
    return 0;
}