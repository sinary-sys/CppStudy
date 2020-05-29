#include<iostream>

using namespace std;

class Time {
public:
    Time(int, int, int);

    void get_time();

    void get_time() const;

    int hour;
    int minute;
    int sec;

};


Time::Time(int h, int m, int s) : hour(h), minute(m), sec(s) {}

void Time::get_time() {

    cout << hour << ":" << minute << ":" << sec << endl;

}

void Time::get_time() const {

    cout << hour << ":" << minute << ":" << sec << endl;

}


int main() {

    const Time t1(10, 13, 56);
    int a = t1.sec;
    t1.get_time();
    const Time *p = &t1;
    a = p->sec;
    // t1.get_time();//const����� ��const��Ա�������ܵ���

    //t1.hour = 1;//const��������ݳ�Աֵ������ֱ�Ӹı�

    //int *p1 = &t1.hour;//const����ֻ����constָ��ָ����

    //cout << *p1 << endl;

    //Time *p2 = &t1;//��constָ��ֻ��ָ���const����

    // p2->get_time();

    //const Time t2;//const�����ʼ����Ҫ��ʼ������

    //t2.get_time();


}