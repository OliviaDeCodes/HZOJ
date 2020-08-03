/*************************************************************************
	> File Name: H0138.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:38:24 2019
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
    for (int i = n; i > 0; i--) {
        for (int j = 2 * i; j > 0; j--) {
            printf("%c", x);
        }
        printf("\n");
    }
    return 0;
}

