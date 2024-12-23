#include <iostream>
using namespace std;

int main() {
    char c;
    int letterCount = 0;
    int spaceCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    // 循环读取字符直到遇到换行符
    while ((c = cin.get()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letterCount++;
        }
        else if (c == ' ') {
            spaceCount++;
        }
        else if (c >= '0' && c <= '9') {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    // 输出统计结果
    cout << "英文字母个数: " << letterCount << endl;
    cout << "空格个数: " << spaceCount << endl;
    cout << "数字字符个数: " << digitCount << endl;
    cout << "其它字符个数: " << otherCount << endl;

    return 0;
}