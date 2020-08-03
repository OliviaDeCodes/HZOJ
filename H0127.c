/*************************************************************************
	> File Name: H0127.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:35:26 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define p  3.14

int main() {
    double x, n, sum;
    scanf("%lf %lf", &x, &n);
    if (n == 0) {
        printf("%.0lf\n", x);
        return 0;
    }
    for (int i = 0; i < n; i++) {
        sum = x * 1.06;
        x = sum;
    }
    printf("%.0lf\n", sum - 0.5);
    return 0;
}
