/*************************************************************************
	> File Name: H0112.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:30:32 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char x;
    scanf("%c", &x);
    switch (x) {
        case 'a':
            printf("It is good\n");
            break;
        case 'b':
            printf("OMG\n");
            break;
        case 'c':
            printf("Yes!\n");
            break;
        default:
            break;
    }
    return 0;
}
