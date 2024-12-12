#include <iostream>
using namespace std;
//最大公约数
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}return a;

}
//最小公倍数
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
int main() {
	int num1, num2;
	cout << "输入第一个自然数：";
	cin >> num1;
	cout << "输入第二个自然数：";
	cin >> num2;
	int result1 = gcd(num1, num2);
	cout << "最大公约数是：" << result1<< endl;
	int result2 = lcm(num1, num2);
	cout << "最小公倍数是：" << result2<< endl;
	return 0;

}


	
	