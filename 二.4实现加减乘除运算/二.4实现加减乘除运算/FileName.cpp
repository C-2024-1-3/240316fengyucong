#include <iostream>
using namespace std;
int main() {
	double num1, num2;
	char op;
	cout << "请输入第一个数字：" << endl;
	cin >> num1;
	cout << "请输入运算符（+-*/%）：" << endl;
	cin >> op;
	cout << "请输入第二个数字：" << endl;
		cin >> num2;
	//根据运算符进行运算
	switch (op) {
	case '+':
		cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
		break;
	case'-':
		cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
		break;
	case '*':
			cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
			break;
		case'/':
			if (num2 == 0) {
				cout << "除数不能为0！" << endl;
			}
			else {
				cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;

			}break;
		case'%':
			if (num2 == 0) {
				cout << "除数不能为0！" << endl;
			}
			else if (num1 - (int)num1 != 0 || num2 - (int)num2 != 0)
			{
				cout << "取余操作数必须是整数！" << endl;
			}
			else {
				cout << (int)num1 << "%" << (int)num2 << "=" << (int)num1 % (int)num2 << endl;
			}
			break;
		default:
			cout << "非法运算符！" << endl;
	} return 0;
}