/*************************************************************************
	> File Name: H0126.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:35:03 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define p  3.14

int main() {
    double r1, r2;
    scanf("%lf %lf", &r1, &r2);
    double s1, s2;
    s1 = p * r1 * r1;
    s2 = p * r2 * r2;
    printf("%.2lf\n", fabs((s1 - s2)));
    return 0;
}

