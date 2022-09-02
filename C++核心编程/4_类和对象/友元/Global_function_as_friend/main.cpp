#include <iostream>
#include <string>

using namespace std;

//建筑物类
class Building {
//    goodgay全局函数是 Building好朋友，可以访问Building中私有的成员
    friend void goodgay(Building *building);

public:
    Building() {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

public:
    string m_SittingRoom; // 客厅

private:
    string m_BedRoom; // 卧室
};

//全局函数
void goodgay(Building *building) {
    cout << "好基友的全局函数 正在访问：" << building->m_SittingRoom << endl;
    cout << "好基友的全局函数 正在访问：" << building->m_BedRoom << endl;
}

void test01() {
    Building building;
    goodgay(&building);
}

int main() {

    test01();
    return 0;
}