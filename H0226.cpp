/*************************************************************************
	> File Name: H0226.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 三  2/26 10:58:23 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

#define LL long long

LL qucik_mod(LL a, LL b, LL p) {
    LL tmp = a, ans = 1;
    while (b) {
        if (b & 1) ans = ans * tmp % p;
        tmp = tmp * tmp % p;
        b >>= 1;
    }
    return ans % p;
}

int main() {
    LL a, b, p;
    cin >> a >> b >> p;
    cout << qucik_mod(a, b, p) << endl;
    return 0;
}
