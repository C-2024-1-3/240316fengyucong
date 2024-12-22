#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	//构造函数
	Point(int a = 60, int b = 80)
	{
		x = a;
		y = b;
	}
	//设置坐标值的函数
	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	//显示坐标值的函数
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	//使用构造函数初始化坐标
	Point p1;
	p1.display();
	//使用setPoint函数修改坐标
	p1.setPoint(10, 20);
	p1.display();
	return 0;
}