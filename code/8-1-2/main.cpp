/*  ���� ��8-1��set_time��show_time��������Ϊ��ͨ����
 *  ���ߣ����ΰ
 *  ʱ�䣺2020��5��14��14:46:18
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