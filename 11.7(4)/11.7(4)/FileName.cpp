#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534; //0xfffe
		cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
		cout << "output in char type:!" << static_cast<char>(testUnint)<< endl;
		cout << "output in short type:" << static_cast<short>(testUnint)<< endl;//Ϊʲô���Ϊ-2��
		cout << "output in int type:" << static_cast<int>(testUnint) << endl;
		cout << "output in double type:" << static_cast<double>(testUnint) << endl;
		cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	    cout << "output in Hex unsigned int type:" << hex << testUnint << endl;//16�������
	system("pause");
	return 0;
	double realNumber = 3.14;
	int intNumber = static_cast<int>(realNumber);
	cout << "Converted int from double:" << intNumber << endl;
}

















