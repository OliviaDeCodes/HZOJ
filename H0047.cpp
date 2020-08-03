/*************************************************************************
	> File Name: H0047.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  5/26 15:59:35 2019
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 10000
#define MAX_V 1000000
int dp[MAX_V + 5];
int v[MAX_N + 5];
int w[MAX_N + 5];

int main() {
    int n, V;
    cin >> V >> n;
    for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
    for (int i = 1; i <= n; i++) {
        for (int j = V; j >= v[i]; j--) {
            dp[j] = max(dp[j], dp[j - v[i]] + w[i]); 
        }
    }
    cout << dp[V] << endl;
    return 0;
}
