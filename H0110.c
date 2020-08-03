/*************************************************************************
	> File Name: H0110.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:29:55 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    double n;
    scanf("%lf", &n);
    if (n > 15) {
        printf("%.2lf\n", 90 + (n - 15) * 9);
    } else {
        printf("%.2lf\n", 6 * n);
    }
    return 0;
}
