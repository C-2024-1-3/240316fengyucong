#include <iostream>
#include <algorithm>
using namespace std;
void sortArray(int* arr, int size)
{
	sort(arr, arr + size);
}
int main()
{
	int size;
	cout << "����������Ԫ�صĸ�����";
	cin >> size;
	int* arr = new int[size];
	cout << "����������Ԫ�أ�";
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}cout << "��̬��������ݣ�";
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	sortArray(arr, size);
	cout << "���������飺";
	for (int i = 0; i < size; ++i)
	{
		cout << *(arr + i) << " ";

	}cout << endl;
	delete[]arr;
	return 0;
}