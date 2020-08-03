/*************************************************************************
	> File Name: H0469.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  3/28 14:47:45 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 

int main() {
    int x, ans = 0, ind = 1;
    string str;
    cin >> x >> str;
    for (int i = str.size() - 1; i >= 0; i--) {
        ans += (str[i] - '0') * ind;
        ind *= x;
    }
    cout << ans << endl;
    return 0;
}
