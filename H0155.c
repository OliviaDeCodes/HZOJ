/*************************************************************************
	> File Name: H0155.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:44:50 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n, x = 0, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i ; j++) {
            x += 2;
        }
        printf("%d\n", 3 + x);
        sum += 3 + x;
    }
    printf("%d\n", sum);
    return 0;
}
