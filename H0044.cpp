/*************************************************************************
	> File Name: H0044.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  5/26 14:45:30 2019
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 1000000
int dp[MAX_N + 5];
int len[MAX_N + 5];
int val[MAX_N + 5];

int binary_search(int *arr, int n, int x) {
    int head = 0, tail = n, mid;
    while (head < tail) {
        mid = (head + tail) >> 1;
        if (arr[mid] >= x) tail = mid;
        else head = mid + 1;
    }
    return head;
}

int main() {
    int n, ans = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }
    dp[0] = 1;
    len[0] = 0;
    len[1] = val[1];
    for (int i = 0; i < n; i++) {
        len[ans + 1] = val[i] + 1;
        dp[i] = binary_search(len, ans + 1, val[i]);
        len[dp[i]] = val[i];
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
    return 0;
}
