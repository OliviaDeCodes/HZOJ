/*************************************************************************
	> File Name: H0378.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  3/23 11:54:36 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    stack<char> sta;
    char str[305];
    cin >> str;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            sta.push(str[i]);
        }
        if (str[i] == ')') {
            if (sta.top() == '(') {
                sta.pop();
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
        if (str[i] == ']') {
            if (sta.top() == '[') {
                sta.pop();
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
        if (str[i] == '}') {
            if (sta.top() == '{') {
                sta.pop();
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    if (sta.empty()) {
        cout << "YES" << endl;    
    } else {
        cout << "NO" << endl;
    } 
    return 0;
}
