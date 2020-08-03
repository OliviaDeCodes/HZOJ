/*************************************************************************
	> File Name: H0379.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  3/23 12:43:59 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    stack<int> wh, whmax;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == 0) {
            cin >> tmp;
            wh.push(tmp);
            if (whmax.empty()) {
                whmax.push(tmp);
            } else {
                whmax.push(max(tmp, whmax.top()));
            }
        } else if (tmp == 1) {
            if (!whmax.empty()) {
                wh.pop();
                whmax.pop();
            }
        } else if (tmp == 2) {
            if (whmax.empty()) {
                cout << 0 << endl;
            } else {
                cout << whmax.top() << endl;
            }
        }
    }
    return 0;
}
