#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "请输入一个字符:" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		//转换为大写
		ch = ch - 32;
		cout << ch << endl;
	}
	else {
		//输出后继字符的ASCII码值
		int nextAscii = (int)ch + 1;
		cout << nextAscii << endl;
	}
	return 0;
}