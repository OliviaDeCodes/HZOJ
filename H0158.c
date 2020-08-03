/*************************************************************************
	> File Name: H0158.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:45:51 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        printf("%d", i);
        for (int k = 0; k < 2 * i - 1; k++) {
            printf(" ");
        }
        printf("%d\n", i);
    }
    for (int i = 0; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        if (i == 0) {
            printf("%d\n", i);
            continue;
        } else {
            printf("%d", i);
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf(" ");
        }
        printf("%d\n", i);
    }
    return 0;
}

