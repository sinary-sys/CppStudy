【简答题】

检查下面的程序，找出其中的错误，使之能正常运行。

要求：

（1）width是常数据成员。

（2）写出两种改正方法，并说明原因。



```C++
#include <iostream>

using namespace std;



class Box

{

public:

Box(int, int, int);

int volume();

const int width = 2;

private:

int height, length;

};



Box::Box(int w, int len, int h) 

{

width = w;

length = len;

height = h;

}

int Box::volume(){return(height*width*length);}



int main()

{

Box a(1, 2, 3);

cout << a.width << endl;

cout << a.volume() << endl;

}
```

### 修改法一

- const 数据成员只能通过参数初始化表进行初始化

```c++
#include <iostream>

using namespace std;


class Box {

public:

    Box(int, int, int);

    int volume();

    const int width = 2;

private:

    int height, length;

};


Box::Box(int w, int len, int h) :width(w) {
    

    length = len;

    height = h;

}

int Box::volume() { return (height * width * length); }


int main() {

    Box a(1, 2, 3);

    cout << a.width << endl;

    cout << a.volume() << endl;

}
```

### 修改方法二

```c++
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
```