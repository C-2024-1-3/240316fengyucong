#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "请输入三角形的第一条边：" << endl;
	cin >> side1;
	cout << "请输入三角形的第二条边：" << endl;
	cin >> side2;
	cout << "请输入三角形的第三条边：" << endl;
	cin >> side3;
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
		//计算周长
	{
		double perimeter = side1 + side2 + side3;
		cout << "三角形的周长是：" << perimeter << endl;
	}
	//判断是否为等腰三角形
	if ( side1 == side2 || side1 == side3||side2 == side3)
	{
			cout << "该三角形是等腰三角形" << endl;
	}
	else {
		cout << "该三角形不是等腰三角形" << endl;
	}
		return 0;
}

