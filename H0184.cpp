/*************************************************************************
	> File Name: H0184.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 15:17:28 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int cal(int n) {
    int x = 1;
    for (int i = n; i > 1; i--) {
        x = (x + 1) * 2;
    }
    return x;
}

int main() {
    int n;
    cin >> n;
    cout << cal(n) << endl;
    return 0;
}
