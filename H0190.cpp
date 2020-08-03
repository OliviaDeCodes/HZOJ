/*************************************************************************
	> File Name: H0190.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 9 18:46:42 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int num[8000005] = {1, 1};

int main() {
    int n; 
    cin >> n;
    for (int i = 2; i * i <= n; i++) {
        if (!num[i]) {
            for (int j = 2; i * j <= n; j++) {
                num[i * j] = 1;
            }
        }
    }
    int ans = 0;
    for (int i = 2; i * 2 <= n; i++) {
        if (!num[i] && !num[n - i]) {
            ans += 1;
        }
    }

    cout << ans << endl;
    return 0;
}
