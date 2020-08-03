/*************************************************************************
	> File Name: H0202.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 2 16:07:15 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

void bubble_sort(int *num, int *num1, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            if (num[j] <= num[j + 1]) continue;
            swap(num[j], num[j + 1]);
            swap(num1[j], num1[j + 1]);
        }
    }
    return ;
}

int main() {
    int n;
    cin >> n;
    int arr[1005] = {0};
    int arr1[1005] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr1[i] = i;
    }
    bubble_sort(arr, arr1, n);
    for (int i = 1; i <= n; i++) {
        if (i != 1) cout << " ";
        cout << arr1[i];
    }
    cout << endl;
    return 0;
}
