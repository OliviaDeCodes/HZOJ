/*************************************************************************
	> File Name: H0106.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:28:39 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    double n;
    scanf("%lf", &n);
    if (n > 0) {
        printf("%g\n", n);
    } else {
        printf("%g\n", -n);
    }
    return 0;
}
