#include <iostream>
using namespace std;
int main()
{
	int peach = 1;
	for (int day = 9; day >= 1; day--)
	{
		peach = (peach + 1) * 2;
	}
	cout << "��һ�����ժ��" << peach << " �����ӡ�" << endl;
	return 0;
}