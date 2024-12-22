#include <iostream>
using namespace std;
class Cuboid {
private:
    double length;
    double width;
    double height;
public:
    // 构造函数，初始化成员变量
    Cuboid() {
        length = width = height = 0;
    }
    // 输入长方柱的长、宽、高的函数
    void input() {
        cout << "请输入长方柱的长：";
        cin >> length;
        cout << "请输入长方柱的宽：";
        cin >> width;
        cout << "请输入长方柱的高：";
        cin >> height;
    }
    // 计算长方柱体积的函数
    double volume() {
        return length * width * height;
    }
    // 输出长方柱体积的函数
    void output() {
        cout << "该长方柱的体积为：" << volume() << endl;
    }
};
int main() {
    Cuboid cuboids[3];
    // 循环输入3个长方柱的长、宽、高，并计算和输出体积
    for (int i = 0; i < 3; i++) {
        cout << "第" << i + 1 << "个长方柱：" << endl;
        cuboids[i].input();
        cuboids[i].output();
    }
    return 0;
}
	