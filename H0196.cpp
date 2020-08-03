/*************************************************************************
	> File Name: H0196.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 17:12:33 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int pa(int n) {
    if (n <= 0) return 0;
    if (n == 2) return 1;
    if (n == 3) return 1; 
    return pa(n - 2) + pa(n - 3);
}

int main() {
    int n;
    cin >> n;
    cout << pa(n) << endl;
    return 0;
}
