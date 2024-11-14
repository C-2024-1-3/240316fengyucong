#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int apples = 2;
    int total_apples = 0;
    double total_cost = 0;
    int days = 0;

    // 循环计算每天购买的苹果数量和花费
    while (total_apples + apples <= 100) {
        double cost = apples * 0.8;
        total_apples += apples;
        total_cost += cost;
        apples *= 2;
        days++;
    }

    // 计算平均花费
    double average_cost = total_cost / days;
    cout << "每天平均花费: " << average_cost << " 元" << endl;

    return 0;
}