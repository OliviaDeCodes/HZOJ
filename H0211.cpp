/*************************************************************************
	> File Name: H0211.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  2/10 14:53:26 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    string str[35];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        reverse(str[i].begin(), str[i].end());
    }
    sort(str, str + n);
    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
    return 0;
}
