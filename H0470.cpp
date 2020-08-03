/*************************************************************************
	> File Name: H0470.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/31 15:39:30 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n, num[500005];

int main() {
    char str[10];
    while (cin >> str) {
        for (int i = 4, j = 1; i >= 0; i--, j *= 36) {
            int t;
            if (str[i] <= '9') {
                t = str[i] - '0';
            } else {
                t = str[i] - 'A' + 10;
            }
            num[n] += t * j;
        }
        n++;
    }
    sort(num, num + n);
    int mmin = 99999999;
    for (int i = 0; i < n - 1; i++) {
        int t = num[i + 1] - num[i];
        if (t < mmin) mmin = t;
    }
    cout << mmin << endl;
    return 0;
}
