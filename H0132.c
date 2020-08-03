/*************************************************************************
	> File Name: H0132.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:36:51 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main() {
    int n, x;
    long long int ans = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        ans *= x;
    }
    printf("%lld\n", ans);
    return 0;
}
