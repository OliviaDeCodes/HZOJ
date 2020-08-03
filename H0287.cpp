/*************************************************************************
	> File Name: H0287.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  3/23 14:55:30 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int> > q;
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        q.push(t);
    }
    while (q.size() != 1) {
        int t = q.top();
        q.pop();
        t += q.top();
        q.pop();
        ans += t;
        q.push(t);
    }
    cout << ans << endl;
    return 0;
}

