/* ������8-1 �� ��set_time��show_time��������Ϊ��Ա�����Ĵ�����
 * ���ߣ����ΰ
 * ���ڣ�2020��5��14��14:43:56
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