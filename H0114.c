/*************************************************************************
	> File Name: H0114.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:31:13 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char x;
    scanf("%c", &x);
    switch (x) {
        case 'h':
            printf("He\n");
            break;
        case 'l':
            printf("Li\n");
            break;
        case 'c':
            printf("Cao\n");
            break;
        case 'd':
            printf("Duan\n");
            break;
        case 'w':
            printf("Wang\n");
            break;
        default:
            printf("Not Here\n");
            break;
    }
    return 0;
}

