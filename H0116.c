/*************************************************************************
	> File Name: H0116.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:31:53 2019
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x > z) {
        int temp = x;
        x = z;
        z = temp;
    }
    if (y > z) {
        int temp = y;
        y = z;
        z = temp;
    }
    if (x + y > z) {
        if ((x * x + y * y) > (z * z)) {
            printf("acute triangle\n");
        }
        if ((x * x + y * y) == (z * z)) {
            printf("right triangle\n");
        }
        if ((x * x + y * y) < (z * z)) {
            printf("obtuse triangle\n");
        }
    } else {
        printf("illegal triangle\n");
    }
    return 0;
}

