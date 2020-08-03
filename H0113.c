/*************************************************************************
	> File Name: H0113.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:30:52 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int y, m;
    scanf("%d %d", &y, &m);
    if ((y % 100 != 0 && y % 4 == 0) || (y % 400) == 0) {
        if (m == 2) {
            printf("%d\n", 29);
        } else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            printf("%d\n", 31);
        } else {
            printf("%d\n", 30);
        }
    } else {
        if (m == 2) {
            printf("%d\n", 28);
        } else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            printf("%d\n", 31);
        } else {
            printf("%d\n", 30);
        }
    }
    if (y % 400 == 0 && y)
    return 0;
}

