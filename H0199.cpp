/*************************************************************************
	> File Name: H0199.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 19:06:58 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int num[100005] = {0 ,1, 2, 3, 4, 5, 6, 7, 8, 9};
int a[11]; 

int f(int x) {
    int y = 0;
    for (int i = 1; i <= 10; i++) {
        if (a[i] ==  1) y += a[i] * num[x - i];
    }
    return y;
}

int main() {
    int k, m;
    cin >> k >> m;
    for (int i = 1; i <= 10; i++) {
        cin >> a[i];
    }
    for (int i = 10; i <= k; i++) {
        num[i] = f(i) % m;
    }
    cout << num[k] << endl;

    return 0;
}
