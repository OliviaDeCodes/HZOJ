/*************************************************************************
	> File Name: H0185.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 15:21:46 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int fb(int n) {
    int step[55] = {0};
    step[1] = 1;
    step[2] = 1;
    for (int i = 3; i <= n; i++) {
        step[i] = step[i - 1] + step[i - 2];
    }
    if (n == 1 || n == 2) {
        return 1;
    }
    return step[n];
}

int main() {
    int n;
    cin >> n;
    cout << fb(n) << endl;
    return 0;
}
