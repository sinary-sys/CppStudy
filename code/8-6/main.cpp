#include <iostream>
using namespace std;
class cuboid{
public:
    cuboid(int cub[]){
        length=cub[0];
        width=cub[1];
        height=cub[2];
    }
    int v(){
        return length*width*height;
    }

private:
    int length;
    int width;
    int height;
};
int main() {
    int cub[3][3];
    for (int i = 0; i < 3; ++i) {
        cout<<"please input length of number "<<i+1<< endl;
        cin>>cub[i][0];
        cout<<"please input width of number "<<i+1<<endl;
        cin >>cub[i][1];
        cout<<"please input height of number "<<i+1<<endl;
        cin >>cub[i][2];
    }
    cuboid c1(cub[0]),c2(cub[1]),c3(cub[2]);

    cout<<"the volume of number 1"<<" is "<<c1.v()<<endl;
    cout<<"the volume of number 2"<<" is "<<c2.v()<<endl;
    cout<<"the volume of number 3"<<" is "<<c3.v()<<endl;
    return 0;
}