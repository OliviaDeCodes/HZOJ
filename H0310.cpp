/*************************************************************************
	> File Name: H0310.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 三  2/26 11:33:22 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1000000
long long prime[MAX_N + 5];

void init_prime() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    init_prime();
    int n;
    cin >> n;
    for (int i = 1; i <= prime[0] && prime[i] <= n; i++) {
        long long cnt = 0;
        for (long long j = prime[i]; j <= n; j *= prime[i]) {
            cnt += n / j;
        }
        cout << prime[i] << ' ' << cnt << endl;
    }

    return 0;
}
