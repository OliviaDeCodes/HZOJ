/*************************************************************************
	> File Name: H0577.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  3/28 12:27:50 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

void check(string &str) {
    for (int i = 0; i <= str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 'a' - 'A';
        }
    }
    return ;
} 

int main() {
    map<string, int> m;
    string str, ans;
    int ans_int = 0;
    while (cin >> str) {
        check(str);
        m[str]++;
        if (m[str] > ans_int) {
            ans = str;
            ans_int = m[str];
        } else if (m[str] == ans_int && str < ans) {
            ans = str;
            ans_int = m[str];
        }
    }
    cout << ans << ' ' << ans_int << endl;
    return 0;
}
