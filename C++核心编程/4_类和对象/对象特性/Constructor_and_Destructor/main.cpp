#include <iostream>

using namespace std;

//  对象的初始化和清理

class Person {
public:
//    1 构造函数
//    没有返回值 不用写void
//    函数名 与类名相同
//    构造函数可以有参数，可以发生重载
//    创建对象的时候，构造函数会自动调用，而且只调用一次
    Person() {
        cout << "Person 构造函数的调用" << endl;
    }

//      2.析构函数 进行清理的操作
//      没有返回值 不写void
//      函数名和类名相同 在名称前加~
//      析构函数不可以有参数的，不可以发生重载
//      对象在销毁前 会自动调用析构函数，而且只会调用一次
    ~Person() {
        cout << "Person 析构函数的调用" << endl;
    }
};


//  构造函数和析构函数都是必须有的实现，如果我们自己不提供，编译器会提供一个空的构造函数和析构函数
void test01() {
    Person p;
}

int main() {
    test01();
}

