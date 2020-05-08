#include <iostream>
using namespace std;
struct date{
    int day;
    int mouth;
    int year;
};
int days(date a){
    int leap_day_of_mouth[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int day_of_mouth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((a.year%4)==0){
        int day2=0;
        for (int i = 0; i < a.mouth-1; ++i) {
            day2=day2+leap_day_of_mouth[i];
        }
        return day2+a.day;

    } else{
        int day1=0;
        for (int i = 0; i < a.mouth-1; ++i) {
            day1=day1+day_of_mouth[i];
        }
        return day1+a.day;
    }
}
int main() {
    date a;
    cout<<"please input data of year"<<endl;
    cin>>a.year;
    cout<<"please input data of mouth"<<endl;
    cin>>a.mouth;
    cout<<"please input data of day"<<endl;
    cin>>a.day;
    cout<<"your date of days is "<<days(a)<<endl;
    return 0;
}