/*************************************************************************
	> File Name: H0382.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  3/23 12:56:02 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
 
    while (q.size() != 1) {
        for (int i = 1; i < m; i++) {
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }
    cout << q.front() << endl;
    return 0;
}
