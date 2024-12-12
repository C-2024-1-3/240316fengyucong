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
	cout << "请输入数组元素的个数：";
	cin >> size;
	int* arr = new int[size];
	cout << "请输入数组元素：";
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}cout << "动态数组的内容：";
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	sortArray(arr, size);
	cout << "排序后的数组：";
	for (int i = 0; i < size; ++i)
	{
		cout << *(arr + i) << " ";

	}cout << endl;
	delete[]arr;
	return 0;
}