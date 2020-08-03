/*************************************************************************
	> File Name: H0217.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  3/28 13:21:37 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, num[105] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        num[t]++;
    }
    int ans = 0;
    for (int i = 100; i >= 0; i--) {
        ans += num[i];
        if (ans * 2 >= n) {
            cout << i << ' ' << ans << endl;
            break;
        }
    }
    return 0;
}
