/*
 * 练习案例1：设计立方体类
 * 设计立方体类（cube）
 * 求出立方体的面积和体积
 * 分别用全局函数和成员函数判断两个立方体是否相等
 */

#include <iostream>

class Cube {
public:
    //行为
//    设置获取长宽高
    int getLength() {
        return m_L;
    }

    void setLength(int length) {
        m_L = length;
    }

    int getWidth() {
        return m_W;
    }

    void setWidth(int width) {
        m_W = width;
    }

    int getHeight() {
        return m_H;
    }

    void setHeight(int height) {
        m_H = height;
    }
//    获取立方体的面积

    int calculateS() {
        return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
    }
//    获取立方体的体积

    int calculateV() {
        return m_H * m_W * m_L;
    }

//    利用成员函数判断两个立方体是否相等
    bool isSameByClass(Cube &c) {
        if (m_L == c.getLength() && m_H == c.getHeight() && m_W == c.getWidth()) {
            return true;
        }
        return false;
    }

private:
    //属性
    int m_L;//长
    int m_W;//宽
    int m_H;//高
};

using namespace std;

//利用全局函数判断 两个立方体是否相等
bool isSame(Cube &c1, Cube &c2) {
    if (c1.getLength() == c2.getLength() && c1.getHeight() == c2.getHeight() && c1.getWidth() == c2.getWidth()) {
        return true;
    }
    return false;
}

int main() {

//    创建立方体对象
    Cube c1;
    c1.setLength(10);
    c1.setWidth(10);
    c1.setHeight(10);

    cout << "c1的面积为：" << c1.calculateS() << endl;
    cout << "c1的体积为：" << c1.calculateV() << endl;

//    创建第二个立方体
    Cube c2;
    c2.setLength(10);
    c2.setWidth(10);
    c2.setHeight(10);

//    利用全局函数判断
    bool ret = isSame(c1, c2);
    if (ret) {
        cout << "全局函数判断:c1和c2是相等的" << endl;
    } else {
        cout << "全局函数判断:c1和c2是不相等的" << endl;
    }

//    利用成员函数判断
    bool ret2 = c1.isSameByClass(c2);
    if (ret2) {
        cout << "成员函数判断:c1和c2是相等的" << endl;
    } else {
        cout << "成员函数判断:c1和c2是不相等的" << endl;
    }

    return 0;
}