#include <iostream>
using namespace std;
//���Լ��
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}return a;

}
//��С������
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
int main() {
	int num1, num2;
	cout << "�����һ����Ȼ����";
	cin >> num1;
	cout << "����ڶ�����Ȼ����";
	cin >> num2;
	int result1 = gcd(num1, num2);
	cout << "���Լ���ǣ�" << result1<< endl;
	int result2 = lcm(num1, num2);
	cout << "��С�������ǣ�" << result2<< endl;
	return 0;

}


	
	