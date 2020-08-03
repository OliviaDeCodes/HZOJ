/*************************************************************************
	> File Name: H0123.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:34:00 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    if (c <= a && d >= b) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

