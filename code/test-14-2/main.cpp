#include <iostream>

using namespace std;


class Box {

public:

    Box(int, int);

    int volume();

    const int width=2;

private:

    int height, length;

};


Box::Box(int len, int h) {


    length = len;

    height = h;

}

int Box::volume() { return (height * width * length); }


int main() {

    Box a(1,  3);

    cout << a.width << endl;

    cout << a.volume() << endl;

}