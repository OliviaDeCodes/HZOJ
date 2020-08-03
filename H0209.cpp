/*************************************************************************
	> File Name: H0209.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  2/10 14:07:28 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
using namespace std;

double num[105] = {0};

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i]; 
    }
    sort(num, num + n);
    for (int i = 0; i < n; i++) {
        cout << num[i] << endl;
    }
    return 0;
}
