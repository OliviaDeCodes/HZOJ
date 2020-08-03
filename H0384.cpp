/*************************************************************************
	> File Name: H0384.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  3/23 13:06:59 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int is7(int t) {
    if (t % 7 == 0) return 1;
    while  (t) {
        if (t % 10 == 7) return 1;
        t /= 10;
    }
    return 0;
}

int main() {
    int n, x, t;
    cin >> n >> x >> t;
    queue<int> q;
    for (int i = x; i <= n; i++) {
        q.push(i);
    }
    for (int i = 1; i < x; i++) {
        q.push(i);
    }
    while (q.size() != 1) {
        if (is7(t) == 1) {
            q.pop();
        } else {
            q.push(q.front());
            q.pop();
        }
        t++;
    }
    cout << q.front() << endl;
    return 0;
}
