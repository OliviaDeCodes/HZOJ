/*************************************************************************
	> File Name: H0210.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  2/10 14:36:28 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    string str[30];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    sort(str, str + n);
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << str[i];
    }
    return 0;
}
