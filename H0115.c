/*************************************************************************
	> File Name: H0115.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:31:34 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x == y) {
        printf("%d\n", 100);
    } else if (x % 10 == y / 10 && x / 10 == y % 10) {
        printf("%d\n", 20);
    } else if (x % 10 == y % 10 ||
               x % 10 == y / 10 ||
               x / 10 == y % 10 ||
               x / 10 == y / 10) {
        printf("%d\n", 2);
    } else {
        printf("%d\n", 0);
    }
    return 0;
}
