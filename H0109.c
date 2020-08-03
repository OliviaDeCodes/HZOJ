/*************************************************************************
	> File Name: H0109.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:29:39 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n) {
        if (((n % 10) % 2) == 0) {
            printf("YES\n");
            return 0;
        }
        n /= 10;
    }
    printf("NO\n");
    return 0;
}

