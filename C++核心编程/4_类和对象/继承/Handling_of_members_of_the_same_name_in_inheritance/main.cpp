#include <iostream>

using namespace std;

//继承中的同名成员处理

class Base {
public:
    Base() {
        m_A = 100;
    }

    void func() {
        cout << "Base - func()函数调用" << endl;
    }

    void func(int a) {
        cout << "Base - func(int a)函数调用" << endl;
    }

    int m_A;
};

class Son : public Base {
public:

    Son() {
        m_A = 200;
    }

    void func() {
        cout << "Son - func()函数调用" << endl;
    }


    int m_A;
};

//同名成员属性处理
void test01() {
    Son s;
    cout << "Son 下 m_A = " << s.m_A << endl;
//    如果通过子类对象 访问到父类中的同名成员，需要加作用域
    cout << "Base 下 m_A = " << s.Base::m_A << endl;
}

//同名成员函数处理
void test02() {
    Son s;

    s.func();// 直接调用 调用是子类中的同名成员

//    如何调用到父类中同名成员函数？
    s.Base::func();

//    如果子类中出现了和父类中同名的成员函数，子类中的同名成员会隐蔽掉父类中的所有同名成员函数
//    如果想访问到父类中被隐藏的同名成员函数，需要加作用域
    s.Base::func(100);
}

int main() {

//    test01();

    test02();

    return 0;
}
