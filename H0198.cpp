/*************************************************************************
	> File Name: H0198.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 17:45:16 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int step[100005] = {0};
int x = 1000000007;
int main() {
    int n;
    cin >> n;
    step[0] = 0;
    step[1] = 1;
    for (int i = 2; i <= n; i++) {
        step[i] = (step[i - 1] + step[i - 2]) % x;
    }
    cout << step[n] << endl;
    return 0;
}
