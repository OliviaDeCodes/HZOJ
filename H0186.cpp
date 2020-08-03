/*************************************************************************
	> File Name: H0186.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 16:12:51 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int a[100005] = {0};
int n;

int pp(int x) {
    if (x >= n) return 0;
    else return pp(x + a[x]) + 1;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << pp(0) << endl;
    return 0;
}
