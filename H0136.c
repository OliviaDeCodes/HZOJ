/*************************************************************************
	> File Name: H0136.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:38:07 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main() {
    int n;
    scanf("%d", &n);
    for (int i = 7; i <= n; i++) {
        if (!(i % 7)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

