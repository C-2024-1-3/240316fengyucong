#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	//���캯��
	Point(int a = 60, int b = 80)
	{
		x = a;
		y = b;
	}
	//��������ֵ�ĺ���
	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	//��ʾ����ֵ�ĺ���
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	//ʹ�ù��캯����ʼ������
	Point p1;
	p1.display();
	//ʹ��setPoint�����޸�����
	p1.setPoint(10, 20);
	p1.display();
	return 0;
}