/*************************************************************************
	> File Name: H0140.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:39:22 2019
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
    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i -1; k++) {
            printf("%c", x + i - 1);
        }
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("%c", x + i - 1);
        }
        printf("\n");
    }
    return 0;
}
