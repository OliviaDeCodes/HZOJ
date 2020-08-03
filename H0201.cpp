/*************************************************************************
	> File Name: H0201.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  2/10 15:09:49 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, num[1005] = {0}, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        if (!num[t]) {
            num[t] = 1;
            cnt++;
        } 
    }
    cout << cnt << endl;
    int flag = 0;
    for (int i = 1; i <= 1000; i++) {
        if (num[i]) {
            if (flag) {cout << " ";}
            cout << i;
            flag = 1;
        }
    }

    return 0;
}
