/*************************************************************************
	> File Name: H0482.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  3/28 12:47:38 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

char str[100005];
stack<char> pre, back;
int n;

int main() {
    char t;
    cin >> str >> n;
    for (int i = 0; str[i]; i++) {
        pre.push(str[i]);
    } 
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t == 'L') {
            if (pre.empty()) continue;
            back.push(pre.top());
            pre.pop();
        } else if (t == 'D') {
            if (back.empty()) continue;
            pre.push(back.top());
            back.pop();
        } else if (t == 'B') {
            if (pre.empty()) continue;
            pre.pop();
        } else {
            cin >> t;
            pre.push(t);
        }
    }
    while (!pre.empty()) {
        back.push(pre.top());
        pre.pop();
    }
    while (!back.empty()) {
        cout << back.top();
        back.pop();
    }
    cout << endl;

    return 0;
}
