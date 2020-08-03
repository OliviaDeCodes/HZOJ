/*************************************************************************
	> File Name: H0194.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  2/10 13:59:28 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, s, num[100005] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> s;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (num[i] + num[j] == s) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
