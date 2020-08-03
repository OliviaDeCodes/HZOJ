/*************************************************************************
	> File Name: H0449.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 三  1/29 11:09:53 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int a[20][20];
int main() {
    int n;
    cin >> n;
    a[0][0]=1;
    for (int i = 0; i < n; i++) {
        a[i][0] = 1;
        for (int j = 0; j <= i; j++) {
            if (j == 0) a[i][j] = a[0][0];
            else if (i >= 1 && j >= 1 && i != j) a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            else if (j == i) a[i][j] = a[i - 1][j - 1];
        } 
    }
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j <= i; j++) {
            if (j + 1<= i) printf("%d ", a[i][j]);
            else printf("%d", a[i][j]);
        }
        cout << endl;
    }
    return 0;
}
