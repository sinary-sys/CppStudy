#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class student {
private:
    string num;
    string name;
    int score[3];
public:
    void set_num(string num1) {
        num = num1;
    }

    void set_name(string num1) {
        name = num1;
    }

    void set_score(int *num1) {
        score[0] = num1[0];
        score[1] = num1[1];
        score[2] = num1[2];
    }
    void print_stu(int i){

        cout <<setw(8)<< "No."<<setw(8)<<"num"<<setw(8)<<"name"
        <<setw(8)<<"score1"<<setw(8)<<"score2"<<setw(8)<<"score3"<<endl;
        cout <<setw(8)<< i<<setw(8)<<num<<setw(8)<<name
             <<setw(8)<<score[0]<<setw(8)<<score[1]<<setw(8)<<score[2]<<endl;
    }
} stu[3];

int main() {
    string temp;
    int a[3];
    for (int i = 0; i < 3; i++) {
        cout << "please input student " << i + 1 << " of num" << endl;
        cin >> temp;
        stu[i].set_num(temp);
        cout << "please input student " << i + 1 << " of name" << endl;
        cin >> temp;
        stu[i].set_name(temp);
        for (int j = 0; j < 3; j++) {
            cout << "please input student " << i + 1 << " of "<<j+1<<" score" << endl;
            cin >> a[j];
        }
        stu[i].set_score(a);
    }
    for (int j = 0; j < 3; j++) {
        stu[j].print_stu(j+1);
    }
    return 0;
}