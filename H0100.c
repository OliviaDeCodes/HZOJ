/*************************************************************************
	> File Name: H0100.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:26:44 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

#define p 0.00417

int main() {
    double a, num = 0;
    scanf("%lf", &a);
    int i;
    for (i = 0; i < 6; i++) {
        num = (num + a) * (1 + p);
    }
    printf("$%.2lf\n", num);
    return 0;
}

