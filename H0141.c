/*************************************************************************
	> File Name: H0141.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:39:41 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n;
    char x = 'A';
    scanf("%d", &n);
    for (int i = 1; i <= n + 1; i++) {
        for (int l = i - 1; l > 0; l--) {
            printf(" ");
        }
        for (int j = 0; j < n - i + 2; j++) {
            printf("%c", x + j + i - 1);
        }
        for (int k = n - i; k >= 0; k--) {
            printf("%c", x + k + i - 1);
        }
        printf("\n");
    }
    for (int i = n; i > 0; i--) {
        for (int l = i - 1; l > 0; l--) {
            printf(" ");
        }
        for (int j = 0; j < n - i + 2; j++) {
            printf("%c", x + j + i - 1);
        }
        for (int k = n - i; k >= 0; k--) {
            printf("%c", x + k + i - 1);
        }
        printf("\n");
    }
    return 0;
}

