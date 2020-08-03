/*************************************************************************
	> File Name: H0129.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:35:59 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define p  3.14

int main() {
    int n, x, min = 10000;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (min > x) min = x;
    }
    printf("%d\n", min);
    return 0;
}
