#include <iostream>
#include <iomanip>
using namespace std;

// �ж�һ�������Ƿ�Ϊ�����ĺ���
bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int count = 0;
    for (int i = 2; count < 200; i++) {
        if (is_prime(i)) {
            cout << setw(4) << i;
            count++;
            if (count % 10 == 0) cout << endl;
        }
    }
    return 0;
}