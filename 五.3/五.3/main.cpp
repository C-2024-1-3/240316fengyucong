#include <iostream>
using namespace std;
class Cuboid {
private:
    double length;
    double width;
    double height;
public:
    // ���캯������ʼ����Ա����
    Cuboid() {
        length = width = height = 0;
    }
    // ���볤�����ĳ������ߵĺ���
    void input() {
        cout << "�����볤�����ĳ���";
        cin >> length;
        cout << "�����볤�����Ŀ�";
        cin >> width;
        cout << "�����볤�����ĸߣ�";
        cin >> height;
    }
    // ���㳤��������ĺ���
    double volume() {
        return length * width * height;
    }
    // �������������ĺ���
    void output() {
        cout << "�ó����������Ϊ��" << volume() << endl;
    }
};
int main() {
    Cuboid cuboids[3];
    // ѭ������3���������ĳ������ߣ��������������
    for (int i = 0; i < 3; i++) {
        cout << "��" << i + 1 << "����������" << endl;
        cuboids[i].input();
        cuboids[i].output();
    }
    return 0;
}
	