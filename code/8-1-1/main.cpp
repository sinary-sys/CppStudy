/* 描述：8-1 的 将set_time和show_time函数处理为成员函数的处理方法
 * 作者：孙佳伟
 * 日期：2020年5月14日14:43:56
 */
#include <iostream>
using namespace std;
class Time{
public:
    void set_time();
    void show_time();

private:
    int hour,minute,sec;
};
int main() {
    Time t;
    t.set_time();
    t.show_time();
    return 0;
}

void Time::set_time() {
    cin>>hour>>minute>>sec;
}
void Time::show_time() {
    cout<<hour<<" : "<<minute<<" : "<<sec<<endl;
}