#include <iostream>

using namespace std;

//继承中的对象模型

class Base {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son : public Base {
public:
    int m_D;

};

void test01() {
    // 16
    // 父类中所有非静态成员属性都会被子类继承下去
    // 父类中私有成员属性 都是被编译器给隐藏了，因此是访问不到的，但是确实被继承下去了
    cout << "size of Son = " << sizeof(Son) << endl;
}

int main() {

    test01();

    return 0;
}
