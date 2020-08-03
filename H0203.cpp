/*************************************************************************
	> File Name: H0203.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  2/11 17:49:08 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int m, n, num[11][11] = {0}, arr[105] = {0}, cnt = 0, sum = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num[i][j];
            arr[cnt] = num[i][j];
            cnt++;
        }
    }
    for (int i = 0; i < m; i++) {
        int max = num[0][i];
        for (int j = 1; j < n; j++) {
            if (max < num[j][i]) {
                max = num[j][i];
            }
        }
        cout << max << endl;
    }
    sort(arr, arr + cnt);
    for (int i = cnt - 1; i >= 0; i--) {
        sum += arr[i];
        cout << arr[i];
        if (i) cout << " ";
    }
    cout << endl;
    int ave = round(1.0 * sum / cnt);
    cout << ave << endl;
    int x = 0;
    for (int i = 0; i < cnt; i++) {
        if (ave <= arr[i]) x += 1;
    }
    cout << x << endl;


    return 0;
}
