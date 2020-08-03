/*************************************************************************
	> File Name: H0137.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:38:44 2019
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
    for (int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            printf("%c", x);
            x += 1;
        }
        printf("\n");
    }
    return 0;
}

