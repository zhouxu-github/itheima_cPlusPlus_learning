#include <iostream>

using namespace std;

//函数调用运算符重载

//打印输出类

class MyPrint {
public:
//    重载函数调用运算符
    void operator()(string test) {
        cout << test << endl;
    }
};

void MyPrint02(string test) {
    cout << test << endl;
}

void test01() {
    MyPrint myPrint;

    myPrint("Hello World!");//由于使用起来非常类似于函数调用，因此称为仿函数

    MyPrint02("Hello World!");

}

//仿函数非常的灵活，没有固定的写法
//加法类

class MyAdd {
public:
    int operator()(int number1, int number2) {
        return number1 + number2;
    }
};

void test02() {
    MyAdd myadd;
    int result = myadd(100, 100);
    cout << "result = " << result << endl;

//    匿名函数对象
    cout << MyAdd()(100, 100) << endl;
}

int main() {

//    test01();

    test02();

    return 0;
}