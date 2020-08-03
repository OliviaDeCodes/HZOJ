/*************************************************************************
	> File Name: H0121.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:33:35 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char a, b;
    scanf("%c %c", &a, &b);
    if (a == b) {
        printf("TIE\n");
    } else if (a == 'O' && b == 'Y') {
        printf("MING\n");
    } else if (a == 'Y' && b == 'H') {
        printf("MING\n");
    } else if (a == 'H' && b == 'O') {
        printf("MING\n");
    } else {
        printf("LI\n");
    }
    return 0;
}
