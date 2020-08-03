/*************************************************************************
	> File Name: H0160.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:46:33 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define pi 3.14
#define gen sqrt(2)

int main() {
    double r, h, s;
    scanf("%lf %lf", &r, &h);
    s = r * ((pi + 4)* r + h * (pi + 2 * gen + 2));
    printf("%.2lf\n", s);
    return 0;
}
