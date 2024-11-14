#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "请输入x的值：" << endl;
	cin >> x;
	if (x > 0 && x < 1)
	{
		y = 3 - 2 * x;
	}
	else if (x >= 1 && x < 5)
	{
		y = 2 / (4 * x) + 1;
	}
	else if (x >= 5 && x < 10)
	{
		y = x * x;
	}
	else
	{
		cout << "x的值不在定义域范围内。" << endl;
		return 1;
	}
	cout << "当 x = " << x << "时，y的值为：y=" << y << endl;

	system("pause");
	return 0;
}