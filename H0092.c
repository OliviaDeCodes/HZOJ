/*************************************************************************
	> File Name: H0092.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:24:14 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

#define pi 3.14

int main() {
    double a;
    scanf("%lf", &a);
    printf("%.2lf\n", 2 * pi * a);
    printf("%.2lf\n", pi * a * a);
    return 0;
}
