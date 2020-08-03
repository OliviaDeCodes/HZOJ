/*************************************************************************
	> File Name: H0188.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  2/ 8 15:51:23 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1000005
int num[MAX_N + 5] = {0};
void init() {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (num[i] == 0) {
            for (int j = 2; i * j <= MAX_N; j++) {
                num[i * j] = 1; 
            }
        }
    }
}

int main() {
    init();
    int n, m;
    cin >> n >> m;
    for (int i = m; i <= n; i++) {
        if (num[i]) continue;
        cout << i << endl;
    }
    return 0;
}
