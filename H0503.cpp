/*************************************************************************
	> File Name: H0503.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 三  2/26 12:59:56 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 30000
int a[MAX_N + 5];

int main() {
    int w, n;
    cin >> w >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int p = 0, q = n - 1, cnt = 0;
    while (p <= q) {
        while (p < q && a[p] + a[q] > w) q--, cnt++;
        cnt += 1;
        p += 1, q -= 1;
    }
    cout << cnt << endl;
    return 0;
}
