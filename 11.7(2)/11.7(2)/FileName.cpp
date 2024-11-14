#include <iostream>
using namespace std;
const double PI = 3.14159;
int main()
{
	
	double radius;
	
	cout << "ÇëÊäÈëÔ²×¶µ×Ãæ°ë¾¶:";
	
	cin >> radius;
	double height;
	cout << "ÇëÊäÈëÔ²×¶µÄ¸ß£º";
	cin >> height;
	double volume = PI * radius * radius * height / 3;
	cout << "Ô²×¶Ìå»ýÎª£º" << volume << endl;
	system("pause");

	return 0;

}