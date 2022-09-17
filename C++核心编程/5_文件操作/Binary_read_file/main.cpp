#include <iostream>
#include <fstream>

using namespace std;

// 二进制文件 写文件
class Person {
public:
    char m_Name[64]; // 姓名
    int m_Age; // 年龄
};

void test01() {
    // 1.包含头文件

    // 2.创建流对象
    ofstream ifs;

    // 3.打开文件 判断文件是否打开成功
    ifs.open("../Person.txt", ios::in | ios::binary);

    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
        return;
    }
    // 4.读文件
    Person p = {"张三", 18};
    ifs.write((char *) &p, sizeof(Person));
    cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;

    // 5.关闭文件
    ifs.close();
}

int main() {

    test01();

    return 0;
}