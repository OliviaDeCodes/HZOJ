/*************************************************************************
	> File Name: H0214.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  2/11 16:21:16 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int num[35] = {0};

int main() {
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> k;
    sort(num, num + n);
    double sum = 0;
    for (int i = n - k; i < n; i++) {
        sum += num[i];
    }
    printf("%.2f\n", sum / k);
    return 0;
}
