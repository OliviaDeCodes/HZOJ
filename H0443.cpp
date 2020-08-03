/*************************************************************************
	> File Name: H0443.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 三  1/15 19:03:57 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, num = 0;
    cin >> n >> m;
    int *L = new int[n + 1]();
    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            L[j] = 1;
        }
    }
    for (int i = 0; i <= n; i++) {
        if (L[i] != 1) num++;
    }
    cout << num << endl;
    return 0;
}
