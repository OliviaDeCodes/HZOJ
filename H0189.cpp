/*************************************************************************
	> File Name: H0189.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  2/10 11:49:18 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int num[1000005] = {0};

int binary_search(int *num, int n, int x) {
    int head = 1, tail = n, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (num[mid] == x) return mid;
        if (num[mid] > x) tail = mid - 1;
        else head = mid + 1;
    }
    return 0;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 1; i <= k; i++) {
        int x;
        scanf("%d", &x);
        if (i != 1) printf(" ");
        printf("%d", binary_search(num, n, x));
    }    
    printf("\n");
    return 0;
}
