/*************************************************************************
	> File Name: H0236.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/14 13:03:48 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 10
int arr[MAX_N + 5];

void func(int k, int m, int ind, int n, int *arr) {
    if (k == m) {
        for (int i = 0; i < m; i++) {
            i == 0 || cout << " ";
            cout << arr[i];
        }
        cout << endl;
        return ;
    }
    for (int i = ind; i <= n; i++) {
        arr[k] = i;
        func(k + 1, m, i + 1, n, arr);
    }
    return ;
}

int main() {
    int n, m;
    cin >> n >> m;
    func(0, m, 1, n, arr);
    return 0;
}
