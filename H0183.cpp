/*************************************************************************
	> File Name: H0183.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 14:57:22 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int cal(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        if (n > 1 && n % 2 == 0) {
            return 3 * cal(n / 2) - 1;
        } else if (n > 1 && n % 2 == 1) {
            return 3 * cal((n + 1) / 2) - 1;
        }
    }
    return -1;
}

int main() {
    int x;
    cin >> x;
    cout << cal(x) << endl;
    return 0;
}
