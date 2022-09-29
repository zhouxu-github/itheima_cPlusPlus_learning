#include <iostream>
#include <string>

using namespace std;

//子串获取
void test01() {
    string str = "abcdef";

    string substr = str.substr(1, 3);
    cout << "substr = " << substr << endl;

}

//实用操作
void test02() {
    string email = "hello@sina.com";

    //从邮件地址中获取 用户名信息
    int pos = email.find('@');
    string usrName = email.substr(0, pos);
    cout << "usrName = " << usrName << endl;
}

int main() {

    test01();

    test02();

    return 0;
}