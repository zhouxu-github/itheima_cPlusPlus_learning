#include <iostream>
#include <queue>
#include <string>

using namespace std;

class Person {
public:
    Person(string name, int age) {
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;
};

// 队列 queue
void test01() {
    // 创建队列
    queue<Person> q;

    // 准备数据
    Person p1("唐僧", 20);
    Person p2("孙悟空", 1000);
    Person p3("猪八戒", 900);
    Person p4("沙僧", 800);

    // 入队
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    //队列大小
    cout << "队列大小为：" << q.size() << endl;

    // 判断只要队列不为空，查看对头，查看队尾，出队
    while (!q.empty()) {
        //查看对头
        cout << "对头元素----姓名：" << q.front().m_Name
             << "对头元素----年龄：" << q.front().m_Age << endl;

        //查看对尾
        cout << "对尾元素----姓名：" << q.back().m_Name
             << "对尾元素----年龄：" << q.back().m_Age << endl;

        //出队
        q.pop();
    }

}

int main() {

    test01();

    return 0;
}