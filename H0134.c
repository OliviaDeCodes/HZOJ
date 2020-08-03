/*************************************************************************
	> File Name: H0134.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:37:27 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main() {
    int a, b;
    int flag = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (!(i % 11)) {
            if (flag) printf(" ");
            printf("%d", i);
            flag++;
        }
    }
    printf("\n");
    return 0;
}

