/*************************************************************************
	> File Name: H0124.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:34:17 2019
 ************************************************************************/

 #include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if ((a > 0 || b <= 50) && (c <= 25 || d >= 5)) {
        printf("ok\n");
        return 0;
    } else {
        printf("pass\n");
        return 0;
    }
    return 0;
}

