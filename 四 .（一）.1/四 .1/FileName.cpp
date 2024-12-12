#include <iostream>
using namespace std;
int main() {
	int arr[10];
	int count = 0;
	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		bool found = false;
		for (int j = 0; j < count; j++) {
			if (arr[j] == num) {
				found = true;
				break;
			}
		}if (!found) {
			arr[count++] = num;
		}
	}for (int i = 0; i < count; i++)
	{
		cout << arr[i] << " ";
	}cout << endl;
	return 0;
}