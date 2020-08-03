/*************************************************************************
	> File Name: H0049.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  5/26 19:12:46 2019
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_V 100000

int dp[MAX_V + 5];
int v[MAX_N + 5];
int w[MAX_N + 5];
int s[MAX_N + 5];

struct Node {
    int v, w;
} q[MAX_V  + 5];
int head = 0, tail = 0;

int main() {
    int V, n;
    cin >> V >> n;
    for (int i = 0; i < n; i++) cin >> v[i] >> w[i] >> s[i];
    for (int i = 0; i < n; i++) {
        for (int r = 0; r < v[i]; r++) {
            head = tail = 0;
            for (int j = r; j <= V; j += v[i]) {
                Node d = {j, dp[j] - j / v[i] * w[i]};
                while (tail > head && d.w > q[tail - 1].w) tail--;
                q[tail++] = d;
                if ((j - q[head].v) / v[i] > s[i]) head++;
                dp[j] = q[head].w + j / v[i] * w[i];
            }
        }
    }
    cout << dp[V] << endl;
    return 0;
}
