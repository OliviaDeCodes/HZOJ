/*************************************************************************
	> File Name: H0131.c
	> Author: zhengdongqi
	> Mail:
	> Created Time: 四  5/23 23:36:35 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define p  3.14

int main() {
    int n, x, max = 0, min = 10000;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (max < x) max = x;
        if (min > x) min = x;
    }
    printf("%d\n", max - min);
    return 0;
}
