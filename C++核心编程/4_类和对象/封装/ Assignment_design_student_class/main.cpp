#include <iostream>
#include <string>

using namespace std;

//设计一个学生类，属性有姓名和学号
//可以给姓名和学号赋值，可以显示学生的姓名和学号

//设计学生类
class Student {
//    公共权限
public:
//    类中的属性和行为统一称为成员
//    属性 成员属性 成员变量
//    行为 成员函数 成员方法

//    属性
    string m_Name;//姓名
    int m_Id;//学号

//    行为
//    显示姓名和学号
    void showStudent() {
        cout << "姓名：" << m_Name << " 学号：" << m_Id << endl;
    }

//    给姓名赋值
    void setName(string name) {
        m_Name = name;
    }

//    给学号赋值
    void setId(int id) {
        m_Id = id;
    }
};

int main() {

//    创建一个具体的学生 实例化对象
    Student s1;
    s1.m_Name = "张三";
    s1.m_Id = 1;

//    显示学生的信息
    s1.showStudent();

    Student s2;
    s2.setName("李四");
    s2.setId(1);
    s2.showStudent();


    return 0;


}
