/*************************************************************************
	> File Name: H0048.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  5/26 18:48:48 2019
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 10000
#define MAX_V 10000
int dp[MAX_N + 5];
int v[MAX_V + 5];
int w[MAX_V + 5];

int main() {
    int N, V;
    cin >> N >> V;
    for (int i = 1; i <= N; i++) {
        cin >> v[i] >> w[i];
    }
    for (int i = 1; i <= N; i++) {
        for (int j = v[i]; j <= V; j++) {
            dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
        }
    }
    cout << dp[V] << endl;
    return 0;
}
