/*************************************************************************
	> File Name: H0139.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:39:01 2019
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
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (int k = 2 * i; k > 0; k--){
            printf("A");
        }
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (int k = 2 * i; k > 0; k--){
            printf("A");
        }
        printf("\n");
    }
    return 0;
}

