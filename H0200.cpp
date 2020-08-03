/*************************************************************************
	> File Name: H0200.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 19:48:57 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int a[100] = {4, 7};

void f(int n) {
    double sum = 4.0 / 7;
    for (int i = 2; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2];
        sum += 1.0 * a[i - 1] / a[i];
    }
    cout << a[n - 1] << "/" << a[n] << endl;
    printf("%.2f\n", sum);
    return ; 
}

int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}
