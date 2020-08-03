/*************************************************************************
	> File Name: H0376.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  3/23 13:56:38 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    int n, m, ans = 0;
    cin >> n >> m;
    queue<int> q;
    for (int i = 0; i < m; i++) {
        int t , f = 0;
        cin >> t;
        for (int j = 0; j < q.size(); j++) {
            if (q.front() == t) {
                f = 1;
            }
            q.push(q.front());
            q.pop();
        }
        if (f == 0) {
            ans++;
            q.push(t);
            if (q.size() > n) {
                q.pop();
            }
        }
    }
    cout << ans << endl;
    return 0;
}
