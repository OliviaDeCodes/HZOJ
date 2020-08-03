/*************************************************************************
	> File Name: H0098.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:26:10 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

#define p 3.14

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.2lf\n", a * a * p);
    printf("%.2lf\n", a * a * p * b);
    return 0;
}
