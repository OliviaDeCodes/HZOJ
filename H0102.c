/*************************************************************************
	> File Name: H0102.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:27:24 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, t, n = 0;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &t);
    a = 1 / a;
    b = 1 / b;
    c = 1 / c;
    n = (1 - (a + b) * t) / (a + b - c) + t;
    printf("%.2lf\n", n);
    return 0;
}

