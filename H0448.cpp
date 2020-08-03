/*************************************************************************
	> File Name: H0448.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 三  1/15 18:19:06 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
    int n; 
    int num[105] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num[i]);
    }
    int value, i;
    scanf("%d", &value);
    for (i = 1; i <= n; i++) {
        if (value == num[i]) {
            printf("%d\n", i);
        }
    }
    return 0;
}
