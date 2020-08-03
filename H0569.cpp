/*************************************************************************
	> File Name: H0569.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  3/23 21:45:39 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <stack>
#include <cstdio>
using namespace std;

struct node {
    double v, c, salt;
};

int main() {
    double v0, c0, salt0;
    stack<node> sta;
    cin >> v0 >> c0;
    salt0 = v0 * c0 / 100;
    int n; 
    cin >> n; 
    for (int i = 0; i < n; i++) {
        char t;
        cin >> t;
        if (t == 'P') {
            double vt, ct, saltt;
            cin >> vt >> ct;
            saltt = vt * ct / 100;
            v0 += vt;
            salt0 += saltt;
            sta.push({vt, ct, saltt});
        }
        if (t == 'Z') {
            if (!sta.empty()) {
                v0 -= sta.top().v;
                salt0 -= sta.top().salt;
                sta.pop();
            }
        }
        printf("%d %.5f\n", (int)v0, salt0 / v0 * 100);
    }
 
    return 0;
}
