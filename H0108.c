/*************************************************************************
	> File Name: H0108.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:29:21 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char c;
    double a, b;
    scanf("%c", &c);
    scanf("%lf %lf", &a, &b);
    if (c == 'r') {
        printf("%.2lf\n", a * b);
    } else if (c == 't') {
        printf("%.2lf\n", a * b / 2);
    }
    return 0;
}
