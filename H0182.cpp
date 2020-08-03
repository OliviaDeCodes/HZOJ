/*************************************************************************
	> File Name: H0182.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 2 16:02:43 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (x < temp) x = temp;
    }
    cout << x << endl;
    return 0;
}
