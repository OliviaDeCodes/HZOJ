/*************************************************************************
	> File Name: H0130.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:36:17 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define p  3.14

int main() {
    double x, n, sum = 0;
    scanf("%lf %lf", &x, &n);
    if (n == 0) {
        printf("%g\n", x);
    }
    for (int i = 0; i < n; i++) {
        sum = (x + sum) * 1.00417 ;
    }
    printf("$%.2lf\n", sum);
    return 0;
}
