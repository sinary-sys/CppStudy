#include <iostream>
using namespace std;
class Time

{public:

    Time()

    {hour = 4; minute = 5; sec = 6;}
    void print(){
        cout<<hour<<"\t"<<minute<<"\t"<<sec<<endl;
    }
private:

    int hour = 1, minute = 2, sec = 3;

};

int main()

{
    Time t1;
    Time *p=&t1;
    p->print();
    return 0;}