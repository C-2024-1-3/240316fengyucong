#include <iostream>
using namespace std;
void bubbleSort(double arr[], int size) {
	bool changed = true;
	do {
		changed = false;
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed);
}int main() {
	double arr[10];
	cout << "����10��˫�������֣�" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}bubbleSort(arr, 10);
	cout << "���������֣�" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";

	}cout << endl;
	return 0;
}