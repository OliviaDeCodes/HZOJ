/*************************************************************************
	> File Name: H0193.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  2/10 13:52:32 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, s, num[100000] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> k >> s;
    for (int i = 0; i < n; i++) {
        if (num[i] - k == s) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
