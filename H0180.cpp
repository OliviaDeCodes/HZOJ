/*************************************************************************
	> File Name: H0180.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 2 15:58:21 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int64_t n, ans = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        ans *= 2;
    }
    cout << ans << endl;
    return 0;
}
