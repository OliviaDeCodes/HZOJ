/*************************************************************************
	> File Name: H0235.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/14 13:00:16 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 10
int arr[MAX_N + 5];

void func(int k, int ind, int n, int *arr) {
    if (k != 0) {
        for (int i = 0; i < k; i++) {
            i == 0 || cout << " ";
            cout << arr[i];
        }
        cout << endl;
    }
    for (int i = ind; i <= n; i++) {
        arr[k] = i;
        func(k + 1, i + 1, n, arr);
    }
    return ;
}

int main() {
    int n;
    cin >> n;
    func(0, 1, n, arr);
    return 0;
}
