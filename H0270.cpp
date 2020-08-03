/*************************************************************************
	> File Name: H0270.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  6/23 18:22:57 2019
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

#define MAX_N 300000
int arr[MAX_N + 5];
deque<int> q;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> arr[i], arr[i] += arr[i - 1];
    q.push_back(0);
    int ans = arr[0];
    for (int i = 1; i <= n; i++) {
        if (arr[i] - arr[q.front()] > ans) ans = arr[i] - arr[q.front()];
        while (!q.empty() && arr[q.back()] > arr[i]) q.pop_back();
        q.push_back(i);
        if (i - q.front() >= m) q.pop_front();
    }
    cout << ans << endl;
    return 0;
}
