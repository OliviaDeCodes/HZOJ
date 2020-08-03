/*************************************************************************
	> File Name: H0213.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  2/10 14:19:57 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, num[35] = {0};
    int b[7]= {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    for (int i = n - 1; i >= 0; i--) {
        if (num[i] == 100) b[1] += 1;
        if (num[i] >= 90 && num[i] <= 99) b[2] += 1;
        if (num[i] >= 80 && num[i] <= 89) b[3] += 1;
        if (num[i] >= 70 && num[i] <= 79) b[4] += 1;
        if (num[i] >= 60 && num[i] <= 69) b[5] += 1;
        if (num[i] < 60) b[6] += 1;
        cout << num[i] << endl;
    }
    for (int i = 1; i <= 6; i++) {
        if (i != 1) cout << " ";
        cout << b[i];
    }
    cout << endl;
    return 0;
}
