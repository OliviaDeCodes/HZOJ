/*************************************************************************
	> File Name: H0133.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:37:07 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (j == n) {
                printf("%d*%d=%d\n", i, j, i * j);
            } else {
                printf("%d*%d=%d\t", i, j, i * j);
            }
        }
    }
    return 0;
}
