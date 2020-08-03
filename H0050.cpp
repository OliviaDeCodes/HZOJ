/*************************************************************************
	> File Name: H0052.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  5/27 12:40:35 2019
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 1000000
long long n, m;
long long c[MAX_N + 5], sum[MAX_N + 5];
long long dp[MAX_N + 5], f[MAX_N + 5];
long long q[MAX_N + 5], head = 0, tail = 0;

void set(int i, int j) {
    dp[i] = dp[j] + sum[j] * sum[j] - 2 * sum[i] * sum[j] + sum[i] * sum[i] + m;
    f[i] = dp[i] + sum[i] * sum[i];
}

double slope(int i, int j) {
    return 1.0 * (f[j] - f[i]) / (sum[j] - sum[i]);
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
        sum[i] = sum[i - 1] + c[i];
    }
    q[tail++] = 0;
    for (int i = 1; i <= n; i++) {
        while (tail - head >= 2 && slope(q[head], q[head + 1]) <= 2 * sum[i]) ++head;
        set(i, q[head]);
        while (tail - head >= 2 && slope(q[tail - 1], i) <= slope(q[tail - 2], q[tail - 1])) --tail;
        q[tail++] = i;
    }
    cout << dp[n] << endl;
    return 0;
}
